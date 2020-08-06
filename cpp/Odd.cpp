////Assignment No 15: Splint LL into Odd and Even.


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
	void separate();
};
node *move,*move1,*start=NULL,*temp,*ostart,*estart,*s1;

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
void node::separate()
{
	int c=0;
	while(start!=NULL)
	{
		c++;
		temp=start;
		start=start->link;
		temp->link=NULL;
		if(c%2==0)
		{

			if(estart==NULL)
				estart=temp;

			else
			{
				move=estart;
				while(move->link!=NULL)
				move=move->link;
				move->link=temp;
			}
		}
		else
		{
			if(ostart==NULL)
				ostart=temp;
			else
			{
				move=ostart;
				while(move->link!=NULL)
				move=move->link;
				move->link=temp;
			}
		}
	}
	cout<<"\n Even List \n";
	node *x;
	x=estart;

	while(x!=NULL)
	{
		cout<<"\t"<<x->info;
		x=x->link;
	}


	cout<<"\n Odd List \n";
	node *x1;
	x1=ostart;

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
	cout<<"\n1.Insert  2.Display 3.Separate 4.Exit\n";

	do
	{
		cout<<"\nEnter choice";
		cin>>ch;
		switch(ch)
		{
			
case 1: n.insert(); break;
			case 2: n.dis(); break;
			case 3: n.separate(); break;
			case 4: exit(0);
		}
	}while(ch!=4);
getch();
} 
