////Assignment No 12:Program of Stack to display elements in FIFO manner.


#include<iostream.h>
#include<conio.h>
#include<process.h>
class stack
{
	int f,r,q[10],n,i;
public:
	queue()
	{
		f=r=0;
	}
	void push();
	void pop();
	void dis();
};

void stack::push()
{
	if(r==3)
	 cout<<"\nOverflow";
	else
	{
	 cout<<"\nEnter n";
	 cin>>n;
	 if(f==0)
	    f=1;
	    r++;
	    q[r]=n;
	}
}
Void stack::pop()
{
	if(f==0)
	{
		cout<<"\nUnderflow";
		return;
	}
	else
	{
		int n;
		n=q[f];
		if(f==r)
		 f=r=0;
		else
		 f++;
		 cout<<"\nDeleted element is "<<n;
	}
}
void stack::dis()
{
	if(f==0)
	 cout<<"\nUnderflow";
	else
	{
	 cout<<"\nElements in Stack are:";
	 for(i=f;i<=r;i++)
	  cout<<q[i]<<"\t";
	}
}
void main()
{
	clrscr();
	stack q;
	int ch;
	cout<<"\n 1.Push 2.Display 3.Pop 4. exit \n";
	while(ch!=4)
	{
		cout<<"\nEnter ch:";
		cin>>ch;
		switch(ch)
		{
			case 1: q.push(); break;
			case 2: q.dis(); break;
			case 3: q.pop(); break;
			case 4:exit(0);
		}}
	getch();
}

