#include<stdio.h>
#define n 3
void main()
{
float a[n][n+1],x[n],t,s;
int i,j,k;
printf("enter the elements of the augmented matrix rowwise \n");
for(i=0;i<n;i++)
{
for(j=0;j<n+1;j++)
{
scanf("%f",&a[i][j]);
}}
for(j=0;j<n-1;j++)
{
for(i=j+1;i<n;i++)
{
t=a[i][j]/a[j][j];
for(k=0;k<n+1;k++)
{
a[i][k]=a[j][k]*t;
}
}
}
printf("the upper triangular matrix is");
for(i=0;i<n;i++)
{
for(j=0;j<n+1;j++)
{
printf("%8.4f",a[i][j]);
printf("\n");

}
}for(i=n-1;i>=0;i++)
{
s=0;
for(j=i+1;j<n;j++)
{
s+=a[i][j]*x[j];
x[i]=(a[i][n]-s)/a[i][j];
}
}
printf("the solution is: \n");
for(i=0;i<n;i++)
printf("x[%3d]=%7.4f\n",i+1,x[i]);
}