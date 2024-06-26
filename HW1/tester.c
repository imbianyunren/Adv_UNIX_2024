#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    printf("\n[[[TEST]]]./logger config.txt ./ex1-1\n\n");
    system("./logger config.txt ./ex1-1");
    printf("\n[[[TEST]]]./logger config.txt ./ex1-2\n\n");
    system("./logger config.txt ./ex1-2");
    printf("\n[[[TEST]]]./logger config.txt ./ex2\n\n");
    system("./logger config.txt ./ex2");
    printf("\n[[[TEST]]]./logger config.txt ./ex3-1\n\n");
    system("./logger config.txt ./ex3-1");
    printf("\n[[[TEST]]]./logger config.txt ./ex3-2\n\n");
    system("./logger config.txt ./ex3-2");
    printf("\n[[[TEST]]]./logger config.txt ./ex4 www.cs.nycu.edu.tw\n\n");
    system("./logger config.txt ./ex4 www.cs.nycu.edu.tw");
    printf("\n[[[TEST]]]./logger config.txt ./ex4 www.google.com\n\n");
    system("./logger config.txt ./ex4 www.google.com");
    printf("\n[[[TEST]]]./logger config.txt ./ex5 172.217.160.100\n\n");
    system("./logger config.txt ./ex5 172.217.160.100");
    printf("\n[[[TEST]]]./logger config.txt ./ex5 20.27.177.113\n\n");
    system("./logger config.txt ./ex5 20.27.177.113");
    printf("\n[[[TEST]]]./logger config.txt ./ex6 \n\n");
    system("./logger config.txt ./ex6");

   return(0);
}