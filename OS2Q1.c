/*Q.1 Create a child process using fork(), display parent and child process id. Child process will display
the message “Hello World” and the parent process should display “Hi”.*/
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
pid_t pid;
pid=fork();

if(pid==0)
{
printf("\nChild Process id::%d",getpid());
printf("\nHello World");
}
else if(pid>0)
{
printf("\nParent Process id::%d",getpid());
printf("\nHi");
}
else
{
 perror("fork");
 exit(EXIT_FAILURE);
}
return 0;
}
