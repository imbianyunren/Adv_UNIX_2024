#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fnmatch.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dlfcn.h>
#include <netdb.h>
#include <sys/socket.h>
#include <errno.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <errno.h>
char black_list[100][100];
int list_num;
// char black_open[100][100];
// char black_read[100][100];
// char black_write[100][100];
// char black_connect[100][100];
// char black_getaddr[100][100];
char output_file[256];
char target_path[256];
// int black_o, black_r, black_w, black_c, black_g;


void open_config(int f)
{
    char str[10000];

    int flag = 0;
    FILE *fp = fopen64("config.txt", "r");
    if (fp == NULL)
    {
        perror("Error open file");
        // return NULL;
    }
    while (fgets(str, 10000, fp) != NULL)
    {
        if (str[strlen(str) - 1] == '\n')
            str[strlen(str) - 1] = '\0';
        if (strcmp("BEGIN open-blacklist", str) == 0)
        {
            flag = 1;
            continue;
        }
        else if (strcmp("BEGIN read-blacklist", str) == 0)
        {
            flag = 2;
            continue;
        }
        else if (strcmp("BEGIN write-blacklist", str) == 0)
        {
            flag = 3;
            continue;
        }
        else if (strcmp("BEGIN connect-blacklist", str) == 0)
        {
            flag = 4;
            continue;
        }
        else if (strcmp("BEGIN getaddrinfo-blacklist", str) == 0)
        {
            flag = 5;
            continue;
        }
        else if (strcmp("END open-blacklist", str) == 0)
        {
            flag = 0;
            continue;
        }
        else if (strcmp("END read-blacklist", str) == 0)
        {
            flag = 0;
            continue;
        }
        else if (strcmp("END write-blacklist", str) == 0)
        {
            flag = 0;
            continue;
        }
        else if (strcmp("END connect-blacklist", str) == 0)
        {
            flag = 0;
            continue;
        }
        else if (strcmp("END getaddrinfo-blacklist", str) == 0)
        {
            flag = 0;
            continue;
        }

        if (flag == 1 && f == 1)
        {
            strcpy(black_list[list_num++], str);
        }
        else if (flag == 2 && f == 2)
        {
            strcpy(black_list[list_num++], str);
        }
        else if (flag == 3 && f == 3)
        {
            strcpy(black_list[list_num++], str);
        }
        else if (flag == 4 && f == 4)
        {
            strcpy(black_list[list_num++], str);
        }
        else if (flag == 5 && f == 5)
        {
            strcpy(black_list[list_num++], str);
        }

        // for (int i = 0; i < black_o; i++)
        //     printf("%s", black_open[i]);
    }
    // fclose(fp);
}

FILE *fopen(const char *filename, const char *mode)
{

    open_config(1);

    

    memset(target_path, 0, sizeof(target_path));

    if (-1 != readlink(filename, target_path, sizeof(target_path)))
    {
        // fprintf(stderr, "link path is %s \r\n", target_path);


    }
    else
    {
        strcpy(target_path, filename);
    }

    int result;

    for(int o = 0 ; o < list_num ; o++)
    result = fnmatch(black_list[o], target_path, FNM_PATHNAME);

    if (result != 1)
    {
        fprintf(stderr, "[logger] fopen(\"%s\", \"%s\") = 0x0\n", filename, mode);
        errno = EACCES;
        return NULL;
    }
    // else if (result == FNM_NOMATCH)
    // {
    //     fprintf(stderr, "File %s 不在 /bin \n", filename);
    // }


    FILE *rvalue = fopen64(target_path, mode);
    fprintf(stderr, "[logger] fopen(\"%s\", \"%s\") = %p\n", filename, mode, rvalue);
    return rvalue;
}

size_t (*fwrite_old)(const void *ptr, size_t size, size_t nmemb, FILE *stream) = NULL;
size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream)
{
    char  tmp[1000];
    char *qtr = malloc(1000);
    char *r = qtr;
    strcpy(tmp, (char *)ptr);
    open_config(3);

    for (int i = 0; i < strlen(ptr); i++)
    {
        if (tmp[i] == '\n')
        {
            strcat(qtr, "\\n\0");
            qtr += 2;
        }
        else
        {
            *qtr++ = tmp[i];
        }
    }

    // if (stream == NULL)
    // {
    //     fprintf(stderr, "[logger] fwrite(\"%s\", %ld, %ld, %p) = %d\n", r, size, nmemb, stream, 0);
    //     errno = EACCES;
    //     return 0;
    // }
    // if (-1 != readlink(filename, target_path, sizeof(target_path)))
    // {
    //     fprintf(stderr, "link path is %s \r\n", target_path);

    // }
    // else
    // {
    //     strcpy(target_path, filename);
    // }

    int result;
    char filenam[200];
    if (stream != NULL)
    {
        char proclnk[200];
        int MAXSIZE = 0xFFF;
        ssize_t re;
        int fno = fileno(stream);
        sprintf(proclnk, "/proc/self/fd/%d", fno);
        re = readlink(proclnk, filenam, MAXSIZE);
        if (re < 0)
        {
            printf("failed to readlink\n");
            exit(1);
        }
        filenam[re] = '\0';
        // printf("fp -> fno -> filename: %p -> %d -> %s\n",stream, fno, filenam);
    }

    for(int w = 0 ; w < list_num ; w++)
    result = fnmatch(black_list[w], filenam, FNM_PATHNAME|FNM_PERIOD);

    
    if (result != 1 || stream == NULL)
    {
        fprintf(stderr, "[logger] fwrite(\"%s\", %ld, %ld, %p) = %d\n", r, size, nmemb, stream, 0);
        errno = EACCES;
        return 0;
    }
    char s[1000];

    // strcpy(s,tmp);
    strncpy(s, tmp, nmemb);
    s[nmemb] = '\0';
    // strcat(s+nmemb,"\0");
    // printf("%s\n%s\n",s,tmp);

    if (fwrite_old == NULL)
    {
        void *handle = dlopen("libc.so.6", RTLD_LAZY);
        if (handle != NULL)
            fwrite_old = dlsym(handle, "fwrite");
    }
    long int ret = 0;
    if (fwrite_old != NULL)
    {
        ret = fwrite_old(ptr, size, nmemb, stream);

        // printf("%s\n",qtr);

        // strcpy(ptr,qtr);
        // fprintf(stderr, "[logger] fread(%p, %ld, %ld, %p) = %ld\n", ptr, size, nmemb, stream, ret);
        // fprintf(stderr, "[logger] getaddrinfo(\"%s\", %p, %p, %p) = %d\n", nodename, service, hints, result, ret);
        // return ret;
    }
    else{
        errno = EACCES;
        return 0;
    }
    // fprintf(stream, "%s", s);
    fprintf(stderr, "[logger] fwrite(\"%s\", %ld, %ld, %p) = %ld\n", r, size, nmemb, stream, ret);

    char filename[300], tmp_file[300];

    char *token, *pre, *prepre;
    strcpy(tmp_file, filenam);
    if(strstr(filenam,".") == NULL){
        token = strtok(tmp_file, "/");
        while (token != NULL)
        {
            // printf("%s\n",token);
            // prepre= pre;
            prepre = token;
            token = strtok(NULL, "/");
        }
    }else{
        token = strtok(tmp_file, "/.");
        while (token != NULL)
        {
            // printf("%s\n",token);
            prepre= pre;
            pre = token;
            token = strtok(NULL, "/.");
        }

    }

    sprintf(filename, "%d-%s-write.log", getpid(), prepre);
    // fprintf(stderr,"%s\n",filename);
    FILE *f = fopen64(filename, "a");
    // if (s[strlen(s) - 1] != '\n')
    // {
    //     s[strlen(s)] = '\n';
    //     s[strlen(s) + 1] = '\0';
    // }
    fprintf(f, "%s", s);

    return nmemb;
}
// fread(0x7ffedd45dd60, 1, 11, 0x64cf93f052a0) = 0
size_t (*fread_old)(void *ptr, size_t size, size_t nmemb, FILE *stream) = NULL;
size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream)
{
    char *qtr = malloc(1000);
    open_config(2);
    int t = 0;

    // if (fgets(qtr, 1000, stream) != NULL)
    // {
    //     for (int r = 0; r < list_num; r++)
    //     {
    //         if (strstr(qtr, black_list[r]))
    //         {
    //             fprintf(stderr, "[logger] fread(%p, %ld, %ld, %p) = %d\n", ptr, size, nmemb, stream, 0);
    //             errno = EACCES;
    //             return 0;
    //         }
    //     }
    //     if (t == 0)
    //     {
    //         strcpy(ptr, qtr);
    //         t++;
    //     }
    //     else
    //     {
    //         strcat(ptr, qtr);
    //     }
    // }


    if (fread_old == NULL)
    {
        void *handle = dlopen("libc.so.6", RTLD_LAZY);
        if (handle != NULL)
            fread_old = dlsym(handle, "fread");
    }
    long int ret;
    if (fread_old != NULL)
    {
        ret = fread_old(qtr, size, nmemb, stream);

        // printf("%s\n",qtr);
        for (int r = 0; r < list_num; r++)
        {
            if (strstr(qtr, black_list[r]))
            {
                fprintf(stderr, "[logger] fread(%p, %ld, %ld, %p) = %d\n", ptr, size, nmemb, stream, 0);
                errno = EACCES;
                return 0;
            }
        }
        strcpy(ptr,qtr);
        fprintf(stderr, "[logger] fread(%p, %ld, %ld, %p) = %ld\n", ptr, size, nmemb, stream, ret);
        // fprintf(stderr, "[logger] getaddrinfo(\"%s\", %p, %p, %p) = %d\n", nodename, service, hints, result, ret);
        // return ret;
    }
    else{
        errno = EACCES;
        return 0;
    }

    // fprintf(stderr, "[logger] fread(%p, %ld, %ld, %p) = %ld\n", ptr, size, nmemb, stream, nmemb);
    
    char filenam[200];
    if (stream != NULL)
    {
        char proclnk[200];
        int MAXSIZE = 0xFFF;
        ssize_t re;
        int fno = fileno(stream);
        sprintf(proclnk, "/proc/self/fd/%d", fno);
        re = readlink(proclnk, filenam, MAXSIZE);
        if (re < 0)
        {
            printf("failed to readlink\n");
            exit(1);
        }
        filenam[re] = '\0';
        // printf("fp -> fno -> filename: %p -> %d -> %s\n",stream, fno, filenam);
    }
    char filename[300], tmp_file[300];

    char *token, *pre,*prepre;
    strcpy(tmp_file, filenam);
    token = strtok(tmp_file, "/.");
    while (token != NULL)
    {
        prepre=pre;
        pre = token;
        token = strtok(NULL, "/.");
    }

    sprintf(filename, "%d-%s-read.log", getpid(), prepre);
    FILE *f = fopen64(filename, "a");
    fprintf(f, "%s", qtr);

    return ret;
}

static int (*getaddrinfo_old)(const char *__restrict nodename,
                              const char *__restrict service,
                              const struct addrinfo *__restrict hints,
                              struct addrinfo **__restrict result) = NULL;

int getaddrinfo(const char *__restrict nodename,
                const char *__restrict service,
                const struct addrinfo *__restrict hints,
                struct addrinfo **__restrict result)
{
    open_config(5);
    // printf("addr:%d\n", black_g);
    for (int g = 0; g < list_num; g++)
    {
        if (strcmp(nodename, black_list[g]) == 0)
        {
            fprintf(stderr, "[logger] getaddrinfo(\"%s\", %p, %p, %p) = -1\n", nodename, service, hints, result);
            return EAI_NONAME;
        }
    }
    if (getaddrinfo_old == NULL)
    {
        void *handle = dlopen("libc.so.6", RTLD_LAZY);
        if (handle != NULL)
            getaddrinfo_old = dlsym(handle, "getaddrinfo");
    }
    int ret;
    if (getaddrinfo_old != NULL)
    {
        ret = getaddrinfo_old(nodename, service, hints, result);
        fprintf(stderr, "[logger] getaddrinfo(\"%s\", %p, %p, %p) = %d\n", nodename, service, hints, result, ret);
        return ret;
    }
    else
        return 1;

    return 1;
}

static int (*connect_old)(int sd, struct sockaddr *server_addr, socklen_t addrlen) = NULL;
int connect(int sockfd, const struct sockaddr *server_addr, socklen_t addrlen)
{
    struct sockaddr_in *ipv4_info = (struct sockaddr_in *)server_addr;
    open_config(4);

    char addr[1000];
    strcpy(addr, inet_ntoa(ipv4_info->sin_addr));
    for (int c = 0; c < list_num; c++)
    {
        if (strcmp(addr, black_list[c]) == 0)
        {
            fprintf(stderr, "[logger] connect(%d, \"%s\", %d) = -1\n", sockfd, addr, addrlen);
            errno = ECONNREFUSED;
            return -1;
        }
    }

    if (connect_old == NULL)
    {
        void *handle = dlopen("libc.so.6", RTLD_LAZY);
        if (handle != NULL)
            connect_old = dlsym(handle, "connect");
    }
    int ret;
    if (connect_old != NULL)
    {
        ret = connect_old(sockfd, (struct sockaddr *)server_addr, addrlen);
        fprintf(stderr, "[logger] connect(%d, \"%s\", %d) = %d\n", sockfd, addr, addrlen, ret);
        return ret;
    }
    else
        return -1;

    return -1;
}

int (*system_old)(const char *command) = NULL;
int system(const char *command)
{
    if (system_old == NULL)
    {
        void *handle = dlopen("libc.so.6", RTLD_LAZY);
        if (handle != NULL)
            system_old = dlsym(handle, "system");
    }

    if (system_old != NULL)
    {
        int ret = system_old(command);
        fprintf(stderr, "[logger] system(\"%s\") = %d\n", command, ret);
        return ret;
    }
    else
        return -1;
    return -1;
}