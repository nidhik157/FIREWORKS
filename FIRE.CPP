#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
int a=VGA,b=VGAHI;
initgraph(&a,&b,"c:\\turboc3\\bgi");
line(0,400,600,400);
rectangle(200,300,300,400);
rectangle(220,250,280,300);
setcolor(RED);
line(250,400,250,200);
circle(280,200,30);
outtextxy(320,200,"press any key to ignite the rocket");
getch();
for(int i=400;i<=700;i++)
{ line(0,j,600,;
rectangle(200,
 setcolor(RED);
 line(250,400-i,250,200-i);
 delay(20);
 cleardevice();

 }

getch();
closegraph();
}