#include<stdio.h>
#include<math.h>
#include<conio.h>
float f(float x)
{
return(x*x*x-x-1);
}
float df(float x)
{
return(3*x*x-1);
}
void main()
{
int itr,maxitr;
float h,a,x,aerr;
printf("enter a,allowed error,maximum iterations \n");
scanf("%f %f %d",&a,&aerr,&maxitr);
for(itr=1;itr<=maxitr;itr++)
{
h=f(a)/df(a);
x=a-h;
printf("iteration no %3d x=%9.6f \n",itr,x);
if(fabs(h)<aerr)
{
printf("after %3d iterations,root=%8.6f \n",itr,x);
}
a=x;
}
getch();
}
