#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
int a=VGA,b=VGAHI;
initgraph(&a,&b,"c:\\turboc3\\bgi");
for(int i=0;i<=500;i++)
{ setcolor(WHITE);
setfillstyle(SOLID_FILL,RED);
line(50+i,50,20+i,100);
line(20+i,100,20+i,150);
line(20+i,150,50+i,150);
arc(70+i,150,0,180,20);
line(90+i,150,150+i,150);
arc(170+i,150,0,180,20);
line(190+i,150,210+i,150);
line(210+i,150,210+i,100);
line(210+i,100,170+i,100);
line(170+i,100,140+i,50);
line(140+i,50,50+i,50);
floodfill(100+i,100,WHITE);
setcolor(WHITE);
setfillstyle(SOLID_FILL,BLACK);
rectangle(60+i,60,90+i,90);
rectangle(110+i,60,140+i,90);
floodfill(70+i,70,WHITE);
floodfill(120+i,70,WHITE);
setcolor(WHITE);
setfillstyle(SOLID_FILL,DARKGRAY);
circle(70+i,150,15);
floodfill(70+i,150,WHITE);
circle(170+i,150,15);
floodfill(170+i,150,WHITE);
setcolor(WHITE);
line(10,170,1000,170);
delay(1000);
cleardevice();
}
getch();
closegraph();
}