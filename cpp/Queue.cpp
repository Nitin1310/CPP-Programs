////Assignment No 9: Implement Linear Queue for Character.


#include<ctype.h>
#include<iostream.h>
#include<conio.h>
#include<process.h>
class queue
{
	char q[10],item;
	int f,r,i;
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
		cout<<"\nEnter Character";
		cin>>item;
		if(((toascii(item)>=65)&&(toascii(item)<=92))||((toascii(item)>=97)&&(toascii(item)<=127)))
		{
			if(f==0)
			f=1;
			r++;
			q[r]=item;
		}
		else
			cout<<"\nInvalid Character:";
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
		item=q[f];
		if(f==r)
		  f=r=0;
		else
		  f++;
		  cout<<"\nDeleted element is "<<item;
	}}
void queue::dis()
{
	if(f==0)
	 cout<<"\nUnderflow";
	else
	{
		cout<<"\nElement in queue are:";
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
		}
	}
	getch();
}

