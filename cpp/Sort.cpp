////Assignment No 18: Perform Sort on LL.


#include<iostream.h>
#include<conio.h>
#include<process.h>
class node
{
	int info,item,s;
	node *link;
public:
	void insert();
	void sort();
	void dis();
};

node *move,*start=NULL, *temp;

void node::insert()
{
	cout<<"\nEnter the item";
	cin>>item;
	node *node1=new node;
	node1->info=item;
	node1->link=NULL;
	if(start!=NULL)
		node1->link=start;
		start=node1;
}
void node::dis()
{
	node *x;
	x=start;
	cout<<"\n Element in LL are:";
	while(x!=NULL)
	{
		cout<<"\t"<<x->info;
		x=x->link;
	}
}
void node::sort()
{
	node *t=start;
	int c=0,j;
	while(t!=NULL)
	{
		c++;
		t=t->link;
	}

	for(j=1;j<=c;j++)
	 for(t=start;t->link!=NULL;t=t->link)
		if((t->info)>(t->link)->info)
		{
			int a;
			a=t->info;
			t->info=(t->link)->info;
			(t->link)->info=a;
		}
	cout<<"\nAfter Sorting: ";
}

void main()
{
	clrscr();
	node n;
	int ch;
	cout<<"\n1.Insert 2.Display 3. Sort 4.Exit\n";
	while(ch!=4)
	{
		cout<<"\n Enter Choice\n";
		cin>>ch;
		switch(ch)
		{
			case 1: n.insert(); break;
			case 2: n.dis(); break;
			case 3: n.sort(); break;
			case 4: exit(0);
		}
	}
	getch();
}

