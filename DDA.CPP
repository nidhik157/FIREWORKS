#include<graphics.h>
#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define ROUND(a) ((int) (a+0.5))



void main()
{
int a=VGA,b=VGAHI;
int x,y,x1,y1,dx,dy,x2,y2,steps,i;
initgraph(&a,&b,"c://turboc3//bgi");
printf("[width: %d]\n[height: %d]\n",getmaxx(),getmaxx());
printf("enter the values of initial coordinates");
scanf("%d%d",&x,&y);
printf("enter the values   of  final coordinates");
scanf("%d%d",&x1,&y1);
dx=x1-x;
dy=y1-y;
if(abs(dx)>abs(dy))
{
steps=abs(dx);
 }
else
  {steps=abs(dy);
   }
x2=dx/(float)steps;
y2=dy/(float)steps;

for( i=0;i<steps;i++)
{
x+=x2;
y+=y2;
putpixel(ROUND(x),ROUND(y),RED);
delay(50);
}
getch();
closegraph();
}





