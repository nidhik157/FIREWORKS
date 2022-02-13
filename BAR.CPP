#include<graphics.h>
#include<conio.h>
void main()
{
int a=VGA,b=VGAHI;
initgraph(&a,&b,"c://turboc3//bgi");
bar(100,100,300,300);
getch();
closegraph();
}