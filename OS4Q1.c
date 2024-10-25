/*Q.1 Write a program to illustrate the concept of orphan process ( Using fork() and sleep())
[10 marks]*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
pid_t pid;
pid=fork();

if(pid==0)
{
printf("Child PID::%d",getpid());
printf("Parent of child process PID:%d\n",getppid());

sleep(5);
printf("Child PID::%d",getpid());
printf("Parent of child process PID:%d\n",getppid());

}
else if(pid>0)
{
printf("Parent ID::%d\n",getpid());
}
/*else
{
perror("fork");
}*/
}


