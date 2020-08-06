////Assignment No 14: Splint LL into Positive and Negative.


#include<iostream.h>
#include<conio.h>
#include<process.h>
class node
{
	int info,item,s;
	node *link;
public:
	void insert();
	void dis();
	void split();
};
node *move,*start=NULL,*temp,*nlist,*plist;

void node::insert()
{
	cout<<"\nEnter the item:";
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
	cout<<"\n Elements in LL are:";
	while(x!=NULL)
	{
		cout<<"\t"<<x->info;
		x=x->link;
	}
}

void node::split()
{
	while(start!=NULL)
	{
		temp=start;
		start=start->link;
		temp->link=NULL;

		if(temp->info<0)
		{

			if(nlist==NULL)
				nlist=temp;
			else
			{
				move=nlist;
				while(move->link!=NULL)
				move=move->link;
				move->link=temp;
			}
		}
		else
		{
			if(plist==NULL)
				plist=temp;
			else
			{
				move=plist;
				while(move->link!=NULL)
				move=move->link;
				move->link=temp;
			}
		}
	}

	cout<<"\n Negative List \n";
	node *x;
	x=nlist;
	while(x!=NULL)
	{
		cout<<"\t"<<x->info;
		x=x->link;
	}

	cout<<"\n Positive List \n";
	node *x1;
	x1=plist;
	while(x1!=NULL)
	{
		cout<<"\t"<<x1->info;
		x1=x1->link;
	}
}

void main()
{
	clrscr();
	node n;
	int ch;
	cout<<"\n1.Insert  2.Display 3.Split 6.Exit\n";

	do
	{
		cout<<"\nEnter choice";
		cin>>ch;
		


switch(ch)
		{
			case 1: n.insert(); break;
			case 2: n.dis(); break;
			case 3: n.split(); break;
			case 4: exit(0);
		}
	} while(ch!=4);
	getch();
} 
