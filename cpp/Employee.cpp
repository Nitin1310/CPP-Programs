////Assignment No 20:Create LL to add Employee Data(EmpID,Name&Design).


#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<string.h>

class node
{
	int empid,item1;
	char name[20],ele[20],des[20],dd[20];
	node *link;
public:
	void insert();
	void dis();
};
node *move,*start=NULL,*temp;
void node::insert()
{       cout<<"\nEnter the Empid,name & designation:";
	cin>>item1;
	cin>>ele;
	cin>>dd;
	node *node1=new node;
	node1->link=NULL;
	node1->empid=item1;
	strcpy(node1->name,ele);
	strcpy(node1->des,dd);
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
	{       cout<<"\n";
		cout<<"\t"<<x->empid;
		cout<<"\t"<<x->name;
		cout<<"\t"<<x->des;
		x=x->link;
	}
}





void main()
{
	clrscr();
	node n;
	int ch;
	cout<<"\n1.Insert 2.Display 3.exit:\n";
	while(ch!=3)
	{
		cout<<"\nEnter choice";
		cin>>ch;
		switch(ch)
		{
			case 1: n.insert(); break;
			case 2: n.dis(); break;
			case 3:exit(0);
		}
	}
getch();
}

