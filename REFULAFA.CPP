#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
float f(float x)
{
return (x*x*x-4*x+1);
}
void regula(float *x, float a, float b, float fa, float fb, int*itr)
{
*x=(fb*a-fa*b)/(fb-fa);
++(*itr);
printf("iteration no %3d x= %7.5f \n",*itr,*x);
}
void main()
{
int itr=0,maxitr;
float x,a,b,x1,aerr;
clrscr();
printf("enter the values of a,b,allowed error,maximum iterations\n");
scanf("%f %f %f %d",&a,&b,&aerr,&maxitr);
regula(&x,a,b,f(a),f(b),&itr);
do{
if(f(a)*f(x)<0)
b=x;
else
a=x;
regula(&x1,a,b,f(a),f(b),&itr);
if(fabs(x1-x)<aerr)
{
printf("after %d iterations root= %6.4f \n",itr,x1);
}
x=x1;
}
while(itr<maxitr);
/*printf("solution does not converge,iteration not possible"); */
getch();
}