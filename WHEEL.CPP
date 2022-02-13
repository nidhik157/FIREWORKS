#include<graphics.h>

#include<conio.h>
void main()
{
int a=VGA,b=VGAHI;
initgraph(&a,&b,"c://turboc3//bgi");
circle(200,200,100);
circle(200,200,80);
circle(200,200,30);
line(200,120,200,170);
line(220,119,220,175);
line(150,200,150,200);
line(125,230,170,200);
line(135,250,175,220);
line(220,220,250,260);
line(230,200,265,242);
getch();
closegraph();
}