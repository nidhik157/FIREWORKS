#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
void main()
{ int x,y,px,py;
int a =VGA,b=VGAHI;
initgraph(&a,&b,"c:\\turboc3\\bgi");
x=getmaxx();
y=getmaxy();

for(int k=0;k<=30;k++)
{px=random(x);
py=random(y);

for(int i=45;i>=0;i-=5)

{
setcolor(i);
setfillstyle(SOLID_FILL,i);
circle(px,py,100-2*i);

delay(100);
}
cleardevice();
}

getch();
closegraph();
}