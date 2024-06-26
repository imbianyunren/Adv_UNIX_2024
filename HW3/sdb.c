#include <stdio.h>
#include <stdlib.h>
#include <sys/ptrace.h>
#include <sys/wait.h>
#include <sys/user.h>
#include <unistd.h>
#include <string.h>
#include <capstone/capstone.h>

// gcc -o sdb sdb.c -lcapstone

void errquit(const char *msg)
{
    perror(msg);
    exit(-1);
}
unsigned long long start_addr, end_addr;

typedef struct break_list
{
    unsigned long long b_addr;
    struct break_list *next;
    long orig_code;
    int id;
} b_list;

b_list *head = NULL;
b_list *current = NULL;
int flag = 0;
int enter = 0x01; /* enter syscall (1) or exit from syscall (0) */
int cur_id = 0;

int disassemble(pid_t pid, unsigned long long addr)
{
    csh handle;
    cs_insn *insn;
    int count = 0;
    long code[20];
    int i = 0;
    unsigned long long offset = 0;
    if (cs_open(CS_ARCH_X86, CS_MODE_64, &handle) != CS_ERR_OK)
        errquit("cs_open");
    for (; count < 5; offset += 8)
    {
        code[i] = ptrace(PTRACE_PEEKTEXT, pid, (void *)(addr + offset), NULL);
        count = cs_disasm(handle, (const uint8_t *)&code, offset + 8, addr, 0, &insn);
        // printf(" %ld\n", count);
        i++;
    }

    count = cs_disasm(handle, (const uint8_t *)&code, offset, addr, 0, &insn);
    // printf(" %ld\n", count);

    for (int j = 0; j < 5; j++)
    {
        if (insn[j].address >= end_addr)
        {
            printf("** the address is out of the range of the text section.\n");
            break;
        }
        printf("%*s%lx:", 6,"",insn[j].address);
        for (i = 0; i < insn[j].size; i++)
            printf(" %02x", insn[j].bytes[i]);

        int spaces_before_mnemonic = 33 - (insn[j].size * 3);
        int spaces_before_opstr = 10 - (strlen(insn[j].mnemonic));
        printf("%*s\t%s%*s%s\n", spaces_before_mnemonic ,"", insn[j].mnemonic,spaces_before_opstr,"", insn[j].op_str);
    }
    cs_free(insn, count);
    cs_close(&handle);

    return 0;
}
void get_end(char *exefile)
{
    FILE *fp;
    char buffer[200];
    char *section_name;
    char *size_str;
    long size = 0;
    sprintf(buffer, "readelf -S -W %s", exefile);
    // 使用 popen 來執行 readelf 命令並打開讀取管道
    fp = popen(buffer, "r");
    if (fp == NULL)
    {
        perror("popen failed");
    }
    while (fgets(buffer, sizeof(buffer), fp) != NULL)
    {
        // 找到包含 .text 的行
        if (strstr(buffer, ".text") != NULL)
        {
            // 跳過前面的欄位，找到 Size 欄位
            section_name = strtok(buffer, " ");
            for (int i = 0; i <= 5; i++)
            {
                section_name = strtok(NULL, " ");
            }
            size_str = section_name;
            // 將 Size 欄位的字符串轉換為數字
            size = strtol(size_str, NULL, 16);
            break;
        }
    }
    pclose(fp);
    // 打印 .text 段的大小
    // printf(".text section size: %ld\n", size);
    end_addr = start_addr + size;
}

void print_registers(struct user_regs_struct regs)
{
    printf("$rax 0x%016llx    $rbx 0x%016llx    $rcx 0x%016llx\n", regs.rax, regs.rbx, regs.rcx);
    printf("$rdx 0x%016llx    $rsi 0x%016llx    $rdi 0x%016llx\n", regs.rdx, regs.rsi, regs.rdi);
    printf("$rbp 0x%016llx    $rsp 0x%016llx    $r8  0x%016llx\n", regs.rbp, regs.rsp, regs.r8);
    printf("$r9  0x%016llx    $r10 0x%016llx    $r11 0x%016llx\n", regs.r9, regs.r10, regs.r11);
    printf("$r12 0x%016llx    $r13 0x%016llx    $r14 0x%016llx\n", regs.r12, regs.r13, regs.r14);
    printf("$r15 0x%016llx    $rip 0x%016llx    $eflags 0x%016llx\n", regs.r15, regs.rip, regs.eflags);
}

void set_breakpoint(pid_t pid, unsigned long long break_addr)
{

    b_list *new_node = (b_list *)malloc(sizeof(b_list));
    new_node->b_addr = break_addr;
    new_node->orig_code = ptrace(PTRACE_PEEKDATA, pid, (void *)break_addr, NULL);
    new_node->next = NULL;
    new_node->id = cur_id++;

    if (head == NULL)
    {
        head = new_node;
        current = new_node;
    }
    else
    {
        current->next = new_node;
        current = new_node;
    }
    // set break point
    if (ptrace(PTRACE_POKETEXT, pid, break_addr, (new_node->orig_code & 0xffffffffffffff00) | 0xcc) != 0)
        errquit("ptrace(POKETEXT)");

    printf("** set a breakpoint at 0x%llx.\n", break_addr);
    return;
}

void info_breakpoint()
{
    // int num = 0;
    if (head == NULL)
    {
        printf("** no breakpoints.\n");
        return;
    }
    printf("Num\tAddress\n");
    for (b_list *tmp = head; tmp; tmp = tmp->next)
    {
        printf("%d\t0x%llx\n", tmp->id, tmp->b_addr);
    }
}

void revert_origin_code(pid_t pid)
{
    for (b_list *tmp = head; tmp; tmp = tmp->next)
    {
        ptrace(PTRACE_POKEDATA, pid, tmp->b_addr, tmp->orig_code);
    }
}

void set_back_breakpoint(pid_t pid)
{
    for (b_list *tmp = head; tmp; tmp = tmp->next)
    {
        ptrace(PTRACE_POKEDATA, pid, tmp->b_addr, (tmp->orig_code & 0xffffffffffffff00) | 0xcc);
    }
}

int check_breakpoint(pid_t pid, unsigned long long rip)
{

    b_list *tmp = head;
    while(tmp != NULL)
    {

        if (tmp->b_addr == rip)
        {
            ptrace(PTRACE_POKEDATA, pid, tmp->b_addr, tmp->orig_code);
            printf("** hit a breakpoint at 0x%llx.\n", tmp->b_addr);
            return 1;
        }
        tmp = tmp->next;
    }

    return 0;
}

void cont(pid_t pid)
{
    int status;
    struct user_regs_struct regs;

    if (flag)
    {
        if (ptrace(PTRACE_SINGLESTEP, pid, NULL, NULL) < 0)
            errquit("PTRACE_SINGLESTEP");
        if (waitpid(pid, &status, 0) < 0)
            errquit("waitpid");
        set_back_breakpoint(pid); // break point in code
        flag = 0;
    }

    ptrace(PTRACE_CONT, pid, NULL, NULL);
    if (waitpid(pid, &status, 0) < 0)
        errquit("waitpid");

    if (WIFEXITED(status))
    {
        printf("** the target program terminated.\n");
        exit(0);
    }
    else if (!WIFSTOPPED(status))
    {
        return;
    }

    ptrace(PTRACE_GETREGS, pid, NULL, &regs);
    if (check_breakpoint(pid, regs.rip - 0x1))
    {
        regs.rip -= 0x1;
        ptrace(PTRACE_SETREGS, pid, NULL, &regs);
        revert_origin_code(pid); // original code
        disassemble(pid, regs.rip);
        flag = 1;
    }
}

void si(pid_t pid)
{
    int status;
    struct user_regs_struct regs;

    if (ptrace(PTRACE_SINGLESTEP, pid, NULL, NULL) < 0)
        errquit("PTRACE_SINGLESTEP");
    if (waitpid(pid, &status, 0) < 0)
        errquit("waitpid");

    if (WIFEXITED(status))
    {
        printf("** the target program terminated.\n");
        exit(0);
    }
    else if (!WIFSTOPPED(status))
    {
        return;
    }

    ptrace(PTRACE_GETREGS, pid, NULL, &regs);
    // printf("rip :: %p\n", (void *)regs.rip);
    flag = check_breakpoint(pid, regs.rip);
    revert_origin_code(pid); // original code
    disassemble(pid, regs.rip);
    if (!flag)
        set_back_breakpoint(pid); // break point in code

    return;
}
bool isInteger(const char *str)
{
    char *endptr;
    // 將字串轉換為長整數
    strtol(str, &endptr, 10);
    // 轉換後有非數字字符
    if (*endptr != '\0')
    {
        return false;
    }
    return true;
}

void delete_breakpoint(pid_t pid, int id)
{
    b_list *prev = NULL;
    b_list *tmp = head;
    // int num = 0;
    while (tmp)
    {
        if (tmp->id == id)
        {
            if (prev == NULL)
            {
                head = tmp->next;
            }
            else
            {
                prev->next = tmp->next;
            }
            ptrace(PTRACE_POKEDATA, pid, tmp->b_addr, tmp->orig_code);
            free(tmp);
            printf("** delete breakpoint %d.\n", id);
            return;
        }
        prev = tmp;
        tmp = tmp->next;
    }
    printf("** breakpoint %d does not exist.\n",id);
    return;
}

void p_syscall(pid_t pid)
{
    struct user_regs_struct regs;
    int status;
    int break_flag = 0;
    // printf("flag:: %d",flag);
    if (flag)
    {
        if (ptrace(PTRACE_SINGLESTEP, pid, NULL, NULL) < 0)
            errquit("PTRACE_SINGLESTEP");
        if (waitpid(pid, &status, 0) < 0)
            errquit("waitpid");
        set_back_breakpoint(pid); // break point in code
        flag = 0;
    }
    ptrace(PTRACE_SYSCALL, pid, NULL, NULL);
    if (waitpid(pid, &status, 0) < 0)
        errquit("waitpid");
    // if child terminate, exit, or error return
    if (WIFEXITED(status))
    {
        printf("** the target program terminated.\n");
        exit(0);
    }
    else if (!WIFSTOPPED(status))
    {
        return;
    }

    ptrace(PTRACE_GETREGS, pid, NULL, &regs);
    if (check_breakpoint(pid, regs.rip - 0x1))
    {
        regs.rip -= 0x1;
        ptrace(PTRACE_SETREGS, pid, NULL, &regs);
        revert_origin_code(pid); // original code
        disassemble(pid, regs.rip);
        flag = 1;
        return;
    }

    // printf("0x%016llx \n",regs.rip);
    if (enter)
    { // syscall enter
        // ** enter a syscall(1) at 0x401030.
        printf("** enter a syscall(%lld) at 0x%llx.\n", regs.orig_rax, regs.rip - 2);
        /* rip has to subtract 2 because machine code of 'syscall' = 0x0f 05 */
        // if (regs.orig_rax == 0x3c || regs.orig_rax == 0xe7)
        //     fprintf(stderr, "\n"); /* exit || exit_group */

        revert_origin_code(pid); // original code
        disassemble(pid, regs.rip - 2);
    }
    else
    { // syscall exit
        printf("** leave a syscall(%lld) =  %lld at 0x%llx.\n", regs.orig_rax, regs.rax, regs.rip - 2);
        revert_origin_code(pid); // original code
        disassemble(pid, regs.rip - 2);
    }
    set_back_breakpoint(pid);
    enter ^= 0x01;
}

void patch(pid_t pid, unsigned long long p_addr, unsigned long long hex_value, int len)
{

    printf("** patch memory at address 0x%llx.\n", p_addr);
    // check patch addr is breakpoint or not
    b_list *tmp = head;
    while( tmp != NULL)
    {
        if (tmp->b_addr == p_addr)
        {
            if (len == 1)
                tmp->orig_code = (tmp->orig_code & 0xffffffffffffff00) | (long)hex_value;
            else if (len == 2)
                tmp->orig_code = (tmp->orig_code & 0xffffffffffff0000) | (long)hex_value;
            else if (len == 4)
                tmp->orig_code = (tmp->orig_code & 0xffffffff00000000) | (long)hex_value;
            else if (len == 8)
                tmp->orig_code = (tmp->orig_code & 0x0000000000000000) | (long)hex_value;
            return;
        }
        tmp = tmp->next;
    }

    long orignal_code = ptrace(PTRACE_PEEKDATA, pid, (void *)p_addr, NULL);
    if (len == 1)
        ptrace(PTRACE_POKEDATA, pid, p_addr, (orignal_code & 0xffffffffffffff00) | (long)hex_value);
    else if (len == 2)
        ptrace(PTRACE_POKEDATA, pid, p_addr, (orignal_code & 0xffffffffffff0000) | (long)hex_value);
    else if (len == 4)
        ptrace(PTRACE_POKEDATA, pid, p_addr, (orignal_code & 0xffffffff00000000) | (long)hex_value);
    else if (len == 8)
        ptrace(PTRACE_POKEDATA, pid, p_addr, (orignal_code & 0x0000000000000000) | (long)hex_value);
    // printf("** patch memory at address 0x%llx.\n", p_addr);
}

int main(int argc, char *argv[])
{
    char sdb_cmd[50];
    char exefile[50];
    char *token = NULL;
    setvbuf(stdout, NULL, _IONBF, 0);
    if (argc < 2)
    {
        while (1)
        {
            printf("(sdb) ");
            fgets(sdb_cmd, 50, stdin);
            token = strtok(sdb_cmd, " ");
            if (strcmp(token, "load") != 0)
            {
                printf("** please load a program first.\n");
                continue;
            }
            token = strtok(NULL, " ");
            if (token == NULL)
            {
                printf("** please load a program first.\n");
                continue;
            }
            if (token[strlen(token) - 1] == '\n')
                token[strlen(token) - 1] = '\0';
            strcpy(exefile, token);
            break;
        }
    }
    else
    {
        strcpy(exefile, argv[1]);
    }

    pid_t pid = fork();
    if (pid < 0)
        errquit("fork");
    if (pid == 0)
    {
        if (ptrace(PTRACE_TRACEME, NULL, NULL, NULL) < 0)
            errquit("PTRACE_TRACEME");
        if (execl(exefile, "", NULL))
            errquit("execl");
    }
    else
    {
        int status;
        char sargv[4][50];
        int cnt;
        // int enter = 0x01; /* enter syscall (1) or exit from syscall (0) */
        struct user_regs_struct regs;
        if (waitpid(pid, &status, 0) < 0)
            errquit("waitpid");
        if (!WIFSTOPPED(status))
            return -1;
        ptrace(PTRACE_SETOPTIONS, pid, NULL, PTRACE_O_EXITKILL);
        ptrace(PTRACE_GETREGS, pid, NULL, &regs);

        printf("** program ");
        printf("'%s'", exefile);
        printf(" loaded. entry point %p.\n", (void *)regs.rip);

        start_addr = regs.rip;
        get_end(exefile);
        disassemble(pid, regs.rip);

        while (1)
        {
            strcpy(sargv[0], "");
            strcpy(sargv[1], "");
            strcpy(sargv[2], "");
            strcpy(sargv[3], "");
            cnt = 0;

            printf("(sdb) ");
            if (fgets(sdb_cmd, 50, stdin) != NULL)
                if (strlen(sdb_cmd) <= 1)
                    continue; //'\n'
            // printf("%s", sdb_cmd);



            token = strtok(sdb_cmd, " \n");
            while (token != NULL)
            {
                // printf("%s\n", token);
                strcpy(sargv[cnt++], token);
                token = strtok(NULL, " \n");
            }



            if (strcmp(sargv[0], "si") == 0)
            {
                si(pid);
            }
            else if (strcmp(sargv[0], "cont") == 0)
            {
                cont(pid);
            }
            else if (strcmp(sargv[0], "break") == 0)
            {
                unsigned long long break_addr = strtoull(sargv[1], NULL, 16);
                set_breakpoint(pid, break_addr);
            }
            else if (strcmp(sargv[0], "info") == 0)
            {
                if (strcmp(sargv[1], "reg") == 0)
                {
                    ptrace(PTRACE_GETREGS, pid, NULL, &regs);
                    print_registers(regs);
                }
                else if (strcmp(sargv[1], "break") == 0)
                {
                    info_breakpoint();
                }
            }
            else if (strcmp(sargv[0], "delete") == 0)
            {
                if (strcmp(sargv[1], ""))
                {
                    if (isInteger(sargv[1]))
                    {
                        delete_breakpoint(pid, (int)strtol(sargv[1], NULL, 10));
                    }
                }
            }
            else if (strcmp(sargv[0], "patch") == 0)
            {
                if (strcmp(sargv[1], "") && strcmp(sargv[2], "") && strcmp(sargv[3], ""))
                {
                    patch(pid, strtoull(sargv[1], NULL, 16), strtoull(sargv[2], NULL, 16), (int)strtol(sargv[3], NULL, 10));
                }
                else
                {
                    printf("** patch [hex address] [hex value] [len]\n");
                }
            }
            else if (strcmp(sargv[0], "syscall") == 0)
            {
                p_syscall(pid);
            }
            // printf("eflag: 0x%llx\n",regs.eflags);
        }
    }
    return 0;
}