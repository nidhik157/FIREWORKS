#include<graphics.h>
#include<conio.h>
void main()
{
int a=VGA,b=VGAHI;
initgraph(&a,&b,"C:\\TURBOC3\\BGI");
circle(100,100,50);
circle(100,100,30);
getch();
closegraph();
}