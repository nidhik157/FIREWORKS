      #include<dos.h>
      #include<conio.h>
#include<STDIO.H>
#include<GRAPHICS.H>
#define height getmaxy()
#define width getmaxx()
#define ground 450
#define maxheight 420
void main()
{
int X,Y=0,T=maxheight,C=1;
int a=VGA,b=VGAHI;
initgraph(&a,&b,"C:\\TURBOC3\\BGI");
for(X=40;X<=getmaxx();X=X+2)
{
rectangle(0,maxheight,getmaxx(),maxheight+5);
floodfill(5,maxheight+3,WHITE);
pieslice(X,Y,0,360,20);
delay(100);
if(Y>maxheight-20)
{
C=0;
T-=40;
}
if(Y<=(maxheight-T))
{
C=1;
}
if(T>=40)
Y=Y+(C?15:-15);
cleardevice();;
if(kbhit())
break;
}
getch();
closegraph();
}