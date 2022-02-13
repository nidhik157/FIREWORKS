#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<dos.h>
void main()
{
int a=VGA,b=VGAHI;
float theta=30,x,y,r=80,rad1,rad2;
initgraph(&a,&b,"c://turboc3//bgi");
x=getmaxx()/2;
y=getmaxx()/2;
while(!kbhit())
{
circle(x,y,r);
rad1=theta*3.14f/180;
rad2=(theta+90)*3.14f/180;
line(x,y,x+r*sin(rad1),y+r*cos(rad1));
line(x,y,x+r*sin(rad2),y+r*cos(rad2));
line(x,y,x-r*sin(rad1),y-r*cos(rad1));
line(x,y,x-r*sin(rad2),y-r*cos(rad2));
theta-=8;
delay(80);
cleardevice();
}
getch();
closegraph();
}


















