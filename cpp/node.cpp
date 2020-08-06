////Assignment No 17: Perform Del. in LL according to position of node.


#include<iostream.h>
#include<conio.h>
#include<process.h>

class node
{
	int info,item;
	node *link;
public:
	void insert();
	void dis();
	void del_info();
	void del_pos();
};
node *move,*start,*temp;

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
	while(x!=NULL)
	{
		cout<<"\t"<<x->info;
		x=x->link;
	}
}

void node::del_pos()
{
	int pos,f=0,c=0;
	node *p;
	cout<<"\nEnter Position:";
	cin>>pos;
	temp=start;
	



if(start==NULL)
		cout<<"\nLL is empty\n";
	if(pos==1)
	{
		start=start->link;
		f=1;
	}
	while(temp!=NULL)
	{
		c++;
		p=temp;
		temp=temp->link;
		if(c==pos-1)
		{
			f=1;
			p->link=temp->link;
		}
	}
	if(f==0)
		cout<<"\n node is not found";
}


void main()
{
	clrscr();
	node n;
	int ch;
	cout<<"\n1.Insert 2.Display 3.Del_position 4.exit:\n";
	while(ch!=4)
	{
		cout<<"\nEnter choice";
		cin>>ch;
		switch(ch)
		{
			case 1: n.insert(); break;
			case 2: n.dis(); break;
			case 3: n.del_pos(); break;
			case 4: exit(0);
		}
	}
getch();
}
