#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
int a=VGA,b=VGAHI;
initgraph(&a,&b,"c:\\turboc3\\bgi");
int x =getmaxx()/2;
int y =getmaxx()/2;
for(int i=30;i<=200;i++)
{
setcolor(i/10);
arc(x,y,0,180,i-10);
delay(50);
}
getch();
closegraph();
}