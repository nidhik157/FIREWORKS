
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
void main()
{int rhx,rhy;
int a=VGA,b=VGAHI;
initgraph(&a,&b,"c:\\turboc3\\bgi");
for(int i=0;i<=400;i++)
{
setcolor(WHITE);
line(20,370,580,370);
setfillstyle(SOLID_FILL,WHITE);
circle(100+i,300,10);
floodfill(100+i,300,WHITE);
line(100+i,310,100+i,350);
line(100+i,350,80+i,370);
line(100+i,350,120+i,370);
line(100+i,330,115+i,340);
line(115+i,340,125+i,325);
line(125+i,325,125+i,280);
line(100+i,280,150+i,280);
arc(125+i,280,0,180,25);
setfillstyle(SOLID_FILL,RED);
floodfill(120+i,275,WHITE);
rhx=getmaxx();
rhy=getmaxy();
for(int j=0;j<=100;j++)
{ setcolor(CYAN);
outtextxy(random(rhx),random(rhy-100),"|");
}


delay(20);
cleardevice();

}

getch();
closegraph();
}