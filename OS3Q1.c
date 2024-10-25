/*Q. 1 Creating a child process using the command exec(). Note down process ids of the parent
and the child processes, check whether the control is given back to the parent after the child
process terminates.*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
 pid_t pid;
 pid=fork();
 if(pid==0)
 {
  printf("Child PID::%d",getpid());
  printf("Parent PID::%d",getppid());
  
  execl("/bin/ls","ls","-l",NULL);
  perror("exec");
  exit(1);
 }
 else if(pid>0)
 {
  printf("Parent Process::%d\n",getpid());
  wait(NULL);
  printf("Child process terminated control returned to parent::");
 }
}
