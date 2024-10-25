/*Q1. Write a program that demonstrates the use of nice() system call. After a child process is started
using fork(), assign higher priority to the child using nice() system call.*/
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
pid_t pid;
pid = fork();
if(pid == 0)
{
//child process
printf("\n I am child process, id=%d\n and my Priority is:%d\n",getpid(),nice(-7));

}
else
{
//parent process
printf("\n I am parent process, id=%d\nand my priority is:%d\n",getpid(),nice(15));
}
return 0;
}
