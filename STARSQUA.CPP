#include<stdio.h>
void main()
{
int side,i,j;
printf("enter the side of a square");
scanf("%d",&side);
for(i=0;i<side;i++)
{
for(j=0;j<side;j++)
{
printf("*");
}
printf("\n");
}
}