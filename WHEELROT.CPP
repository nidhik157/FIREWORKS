#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
#include<conio.h>
int x=100,y=100,r=50;
int x1[15],y1[15];
void drawcircles()
{
setcolor(RED);
circle(x,y,r);
circle(x,y,r+5);
}
void main()
{
double angle=0,theta;
int i,c;
int a=VGA,b=VGAHI;
initgraph(&a,&b,"c://turboc3//bgi");
a=x+r;
while(!kbhit())
{
while(a<=630)
{
theta=M_PI*angle/180;
cleardevice();
drawcircles();
for(i=0;i<18;i++)
{
theta=M_PI*angle/180;
x1[i]=x+r*cos(theta);
y1[i]=y+r*sin(theta);
angle+=20;
line(x,y,x1[i],y1[i]);
}
angle+=2,x+=2,a=x+r;
delay(50);
}
x=100,r=50,a=x+r;
}
getch();
closegraph();

}