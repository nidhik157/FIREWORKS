//to display circles of randomly changing diameters,colours,and fill patterns and random positions on the screen
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
int a=VGA,b=VGAHI;
initgraph(&a,&b,"c:\\turboc3\\bgi");
for(int i=0;i<=100;i++)
{
setcolor(i);
circle(100+i,100+i,50+i);
setfillstyle(SOLID_FILL,i);
floodfill(100+i,100+i,i);
delay(50);
cleardevice();
}
getch();
closegraph();
}