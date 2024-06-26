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
#include <sys/wait.h>

// Usage: ./logger config.txt [-o file] [-p sopath] command [arg1 arg2 ...]
int main(int argc, char *argv[])
{

    char *shared_object_path = "./logger.so";
    char *output_file = NULL;
    char *exefile = NULL;
    char *arg[100];
    int arg_num = 1;
    // printf("We have %d arguments:\n", argc);
    // for (int i = 0; i < argc; ++i)
    // {
    //     printf("[%d] %s\n", i, argv[i]);
    // }
    for (int i = 2; i < argc; i++)
    {
        // printf("%d %d %s\n",i, argc, argv[i]);

        if (strcmp(argv[i], "-p") == 0)
        {
            if (i + 1 < argc)
            {
                shared_object_path = argv[i + 1];
                i++;
            }
            else
            {
                fprintf(stderr, "Error: Missing argument for -p\n");
                return 1;
            }
        }
        else if (strcmp(argv[i], "-o") == 0)
        {
            if (i + 1 < argc)
            {
                output_file = argv[i + 1];
                i++;
            }
            else
            {
                fprintf(stderr, "Error: Missing argument for -o\n");
                return 1;
            }
        }
        else
        {

            if (argv[i][0] == '.' && argv[i][1] == '/'){
                exefile = argv[i];
                if(output_file !=NULL){
                    arg[0]= malloc(strlen(argv[i]));
                    strcpy(arg[0], argv[i]);
                }
            }
            else
            {
                arg[arg_num] = malloc(strlen(argv[i]));
                strcpy(arg[arg_num++], argv[i]);
            }

        }
    }
    int status;
    if (setenv("LD_PRELOAD", shared_object_path, 1) == -1)
    {
        perror("setenv");
        exit(EXIT_FAILURE);
    }

    pid_t pid = fork();
    if (pid == -1)
    {
        printf("can't fork, error occured\n");
        exit(EXIT_FAILURE);
    }
    else if (pid == 0)
    {
        if (output_file != NULL)
        {
            FILE *fpp = fopen(output_file, "w");
            dup2(fileno(fpp), STDERR_FILENO);
        }
        
        if (arg_num == 1)
            execl(exefile, "", NULL);
        else{
            // execl(exefile, exefile,arg[0],NULL);
            // for(int i = 0 ; i < arg_num ;i++) printf("??%s\n",arg[i]);
            arg[arg_num] = NULL;
            execvp(exefile,arg);
        }

    }
    else
    {
        
        waitpid(pid, &status, 0);
    }

    return 0;
}