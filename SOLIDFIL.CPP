#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void incbar(int x1,int y1,int x2,int y2)
{
bar(x1,y1,x2,y2);
}
void main()
{
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"c://turboc3//bgi");
setfillstyle(SOLID_FILL,CYAN);
for(i=0;i<200;i=i+2)
{
incbar(40+i,60+i,80+i,100+i);
delay(50);

}
getch();
closegraph();
}