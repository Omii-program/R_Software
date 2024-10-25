/*Q.1 Write a program to find the execution time taken for execution of a given set of instructions
(use clock() function)*/
#include<stdio.h>
#include<time.h>
int main()
{
  clock_t start,end;
  double cputime;
  int i;
  start=clock();
  for(i=0;i<10000;i++)
  end=clock();
  cputime=((double)(end-start));
  printf("Total time used by cpu is %f",cputime);
}
