#include<iostream.h>
#include<conio.h>
void main()
{   clrscr();
int ar[5];   int n=5,temp;
cout<<"enter the elements of an array";
for(int i=0;i<n;i++)
{cin>>ar[i];
}
for(i=0;i<n;i++)
{
for(int j=0;j<n-i-1;j++)
{
if(ar[j]>ar[j+1])
{temp=ar[j];
ar[j]=ar[j+1];
ar[j+1]=temp;}
}}
for(i=0;i<n;i++)
{cout<<ar[i];   }
getch();}