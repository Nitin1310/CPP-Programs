////Assignment No 26:Program to remove first node & insert it at end.


#include<stdio.h>
#include<conio.h>
struct node
{
int data;
struct node *link;
}*start;
void create(int);
void disp();
void addfl();
void main()
{
int ch,n,i,m,a,pos;
clrscr();
start=NULL;
do
{
cout<<“\n\nMENU\n\n”;
cout<<“\n1.CREATE\n”;
cout<<“\n2.DISPLAY\n”;
cout<<“\n3.ADDFL\n”;
cout<<“\n4.EXIT\n”;
cout<<“\nENTER UR CHOICE\n”;
cin>>ch;
switch(ch)
{
case 1:
cout<<“\n\nHOW MANY NODES U WANT TO CREATE\n”;
cin>>n;
for(i=0;i<n;i++)
{
cout<<“\nENTER THE DATA”;
cin>>m;
create(m);
}
break;
case 3:
addfl();
break;
case 2:
disp();
break;
case 4:
exit(0);
}
}
while(ch!=4);
getch();
}
void addfl()
{
struct node *q,*tmp;
q=start;
tmp=start;
start=start->link;
while(q->link!=NULL)
{
q=q->link;
}
q->link=tmp;
tmp->link=NULL;
}
void create(int data)
{
struct node *q,*tmp;
tmp=(struct node *)malloc(sizeof(struct node));
tmp->data=data;
tmp->link=NULL;
if(start==NULL)
{
start=tmp;
}
else
{
q=start;
while(q->link!=NULL)
q=q->link;
q->link=tmp;
}
}
void disp()
{
struct node *q;
if(start==NULL)
{
cout<<“\n\nLIST IS EMPTY”;
}
else
{
q=start;
while(q!=NULL)
{
cout<<“%d->”,q->data);
q=q->link;
}
cout<<“NULL”;
}
