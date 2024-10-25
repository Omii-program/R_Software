/*Q.1 Write a C program to accept the number of process and resources and find the need matrix
content and display it. */
#include<stdio.h>
int main()
{
int p,r,j,i;
printf("Enter the number of processes::\n");
scanf("%d",&p);
printf("Enter the number of resources::\n");
scanf("%d",&r);

int max[p][r];
int alloc[p][r];
int need[p][r];
printf("Enter Max Matrix\n ");
for(i=0;i<p;i++)
{
for(j=0;j<r;j++)
{
scanf("%d",&max[i][j]);
}
}
printf("Enter alloc matrix:\n");
for(i=0;i<p;i++)
{
 for(j=0;j<r;j++)
 {
  scanf("%d",&alloc[i][j]);
 }
}
printf("calculate need matrix::");
for(i=0;i<p;i++)
{
for(j=0;j<r;j++)
{
 need[i][j]=max[i][j]-alloc[i][j];
}
}
printf("Need Matrix is::\n");
for(i=0;i<p;i++)
{
for(j=0;j<r;j++)
{
 printf("  %d",need[i][j]);
}
printf("\n");
}
}
