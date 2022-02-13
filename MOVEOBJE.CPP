#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
int a=VGA,b=VGAHI;
initgraph(&a,&b,"c://turboc3//bgi");
setcolor(RED);


for(int i=0;i<450;i++)
{
circle(100+i,100,70);

delay(10);
cleardevice();
}
getch();
closegraph();
}