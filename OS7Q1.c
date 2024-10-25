/*Q.1 Write a program to create a child process using fork().The parent should goto sleep state and
child process should begin its execution. In the child process, use execl() to execute the “ls”
command*/
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
   printf("child process pid::%d",getpid());
   execl("/bin/ls","ls",NULL);
 }
 else if(pid>0)
 {
  printf("Parent process pid:%d is going to sleep\n",getpid());
  wait(NULL);
  printf("PArent process has woken up and child process has completed\n");
  //execl("/bin/ls","ls","-l",NULL);
  }
  }
  
 
