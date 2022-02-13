#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
int a=VGA,b=VGAHI;
initgraph(&a,&b,"c://turboc3//bgi");
for(int i=0;i<=300;i++)
{ line(50,400,800,400);
setcolor(RED);
circle(350,350-i,30);
setfillstyle(SOLID_FILL,RED);
floodfill(350,350-i,RED);
delay(10);
cleardevice();
}
line(50,400,800,400);
for(i=0;i<=300;i++)
{ line(50,400,800,400);
     setcolor(RED);
circle(350,50+i,30);
setfillstyle(SOLID_FILL,RED);
floodfill(350,50+i,RED);
delay(10);
cleardevice();
}
getch();
closegraph();
}