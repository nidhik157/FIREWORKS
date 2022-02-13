#include<graphics.h>
#include<conio.h>
void main()
{

int a=VGA,b=VGAHI;
initgraph(&a,&b,"c://turboc3//bgi");
line(90,410,90,50);
line(90,410,590,410);
line(85,60,90,50);
bar3d(150,80,250,410,15,1);
getch();
closegraph();
}