////Assignment No 25:Program to swap Mth and Nth Element of LL.


#include<stdio.h>
#include<conio.h>
struct list
{
int data;
struct list *link;
}*start=NULL;
void creat(int);
void swap();
void disp();
void main()
{
int ch,i,n,m;
clrscr();
do
{
cout<<”1.create”;
cout<<“\n2.display”;
cout<<“\n3.Swap”;
cout<<“\n4.exit”;
cout<<“\nenter ur choice”;
cin>>ch;
switch(ch)
{
case 1:
cout<<“\nHow many nodes”;
cin>>n;
for(i=0;i<n;i++)
{
cout<<“\nEnter the data”;
cin>>m;
creat(m);
}
break;
case 2:
disp();
break;
case 4:
exit(0);
case 3:
swap();
break;
}
}
while(ch!=4);
getch();
}
void creat(int m)
{
struct list *tmp,*q;
tmp=(struct list *)malloc(sizeof(struct list));
tmp->data=m;
tmp->link=NULL;
if(start==NULL)
start=tmp;
else
{
q=start;
while(q->link!=NULL)
{
q=q->link;
}
q->link=tmp;
}
}
void disp()
{
struct list *q;
if(start==NULL)
{
cout<<“list is empty”;
}
else
{
q=start;
while(q!=NULL)
{
cout<<“%d->”,q->data);
q=q->link;
}
}
}
void swap()
{
int m,n,i,tmp;
struct list *q,*ptr,*ptr1;
cout<<“\nEnter the mth and nth position”;
cin>>m>>n;
for(i=1,ptr=start;i<m && ptr!=NULL;ptr=ptr->link,i++);
for(i=1,ptr1=start;i<n && ptr1!=NULL;ptr1=ptr1->link,i++);
if(ptr!=NULL && ptr1!=NULL)
{
tmp=ptr->data;
ptr->data=ptr1->data;
ptr1->data=tmp;
}
else
{
cout<<“\nPosition Not Found”;
}
}
