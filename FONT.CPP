#include<graphics.h>
#include<conio.h>
#include<dos.h>

void main()
{
int a=VGA,b=VGAHI;
initgraph(&a,&b,"C://TURBOC3//BGI");
for(int i=0;i<=15;i++)
{
setcolor(i);
setbkcolor(i);
settextstyle(i,0,i);
outtextxy(100,20*i,"nidhi");
 delay(500);
}
delay(2000);
}