////Assignment No 19: Implement Reverse on LL.


#include<iostream.h>
#include<process.h>
#include<conio.h>
class node
{
	int info;
	node *link;
public:
	void insert();
	void dis();
	void reverse();
};
node *move=NULL,*start=NULL,*temp=NULL;

void node::insert()
{
	int item;
	cout<<"\nEnter item:";
	cin>>item;
	node *node1=new node;
	node1->link=NULL;
	node1->info=item;
	if(start==NULL)
		start=node1;
	else
	{
		move=start;
		while(move->link!=NULL)
		move=move->link;
		move->link=node1;
	}
}
void node::dis()
{
	node *x;
	x=start;
	while(x!=NULL)
	{
		cout<<"\t"<<x->info;
		x=x->link;
	}
}
void node::reverse()
{
	node *temp1,*temp2;
	temp=start;
	temp1=temp->link;
	temp2=temp1->link;
	temp->link=NULL;
	while(temp1!=NULL)
	{
		temp1->link=temp;
		temp=temp1;
		temp1=temp2;
		temp2=temp2->link;
	}
	start=temp;
	dis();
}
void main()
{
	clrscr();
	node n;
	int ch;
	cout<<"\n 1.Insert 2. Display 3.Reverse 4.Exit\n";
	while(ch!=4)
	{
		cout<<"\nEnte ch \n";
		cin>>ch;
		switch(ch)
		{
			case 1: n.insert(); break;
			case 2: n.dis(); break;
			case 3: n.reverse(); break;
			case 4: exit(0);
		}
}
	getch();
}


