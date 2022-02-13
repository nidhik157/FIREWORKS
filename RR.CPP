#include<stdio.h>
#include<graphics.h>
#include<process.h>
#include<conio.h>
#include<dos.h>
void gosound()
{
int i;
for(i=1000,i>=200;i=i-200)
{
sound(i);
delay(100);
nosound();
dealy(50);
}
}
void loading()
{
int i;
char str[10];
for(i=0;i<=200;i++)
{