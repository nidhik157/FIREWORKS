#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class flight
{
private:
int fno;
char des[10];
float dis,fuel;

public:
void feedinfo()
{
cout<<"enter flight number";
cin>>fno;
cout<<"enter destination";
gets(des);
cout<<"enter distance";
cin>>dis;
}
void calfuel()
{
if(dis<=1000)
fuel=500;
else if(dis>1000 && dis<=2000)
fuel=1100;
else if(dis>2000)
fuel=2200;
}
void showinfo()
{
 cout<<"flight no"<<fno;
 cout<<"\ndestination"<<des;
 cout<<"\ndistance"<<dis;
 cout<<"\nquantity of fuel consumed"<<fuel;
 }
 };
 void main()
 {clrscr();
 flight f;
 f.feedinfo();
 f.calfuel();
 f.showinfo();
 getch();
 }
