#include<iostream.h>
#include<conio.h>
#include<process.h>
struct stack
{
int data;
struct stack *next;
};

int tos=-1;
void push(int x)
{
stack *nn;
nn=(stack *)malloc(sizeof(stack));
nn->data=x;
nn->next=tos;
tos=nn;
}
void pop()
{
stack *temp;
if(tos!=NULL)
temp=tos;
tos=tos->next;
free(temp);
else
cout<<"stack underflow";
}
void traverse()
{
stack *p;
p=tos;
while(p->next!=NULL)
{
cout<<p->no;
p=p->next;
}
cout<<p->no;
 }
 void main()
 {clrscr();
 stack s;
 int ch=0;
 while(ch!=-1)
{
cout<<"\n 1.push";
cout<<"\n 2.pop";
cout<<"\n 3.traverse";
cout<<"\n 4.exit";
cout<<"\n 5.enter choice(1-4)";
cin>>ch;
if(ch==1)
{
cout<<"\n enter element to be pushed";
cin>>n;
s.push(n);
}
else if(ch==2)
{
s.pop();
}

else if(ch==3)

{
s.traverse();
}
else if(ch==4)
{
exit(0);
}
else
cout<<"invalid choice";
}
getch();
}