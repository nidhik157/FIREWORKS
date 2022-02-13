#include<graphics.h>
#include<conio.h>
void main()
{
int a=VGA,b=VGAHI;
initgraph(&a,&b,"c:\\turboc3\\bgi");
bar3d(100,100,150,200,15,1);
getch();
closegraph();
}