////Assignment No 8: Implement Linear Queue for Integer.


#include<iostream.h>
#include<conio.h>
#include<process.h>
class queue
{
	int f,r,q[10],n,i;
public:
	queue()
	{
		f=r=0;
	}
	void insert();
	void del();
	void dis();
};

void queue::insert()
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
void queue::del()
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
void queue::dis()
{
	if(f==0)
	 cout<<"\nUnderflow";
	else
	{
	 cout<<"\nElements in queue are:";
	 for(i=f;i<=r;i++)
	  cout<<q[i]<<"\t";
	}
}
void main()
{
	clrscr();
	queue q;
	int ch;
	cout<<"\n 1.insert 2.display 3.delete 4. exit \n";
	while(ch!=4)
	{
		cout<<"\nEnter ch:";
		cin>>ch;
		switch(ch)
		{
			case 1: q.insert(); break;
			case 2: q.dis(); break;
			case 3: q.del(); break;
			case 4:exit(0);
		}}
	getch();
}

