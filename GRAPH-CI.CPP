#include<graphics.h>
#include<conio.h>
void main()
{
int a=VGA,b=VGAHI;
initgraph(&a,&b,"c:\\tc\\bgi");
circle(100,100,50);
closegraph();
getch();
}