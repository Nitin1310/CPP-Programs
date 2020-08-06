//Assignment No 2: Implement Stack for Character.


#include<ctype.h>
#include<process.h>
#include<iostream.h>
#include<conio.h>
#include<string.h>
class stack
{
	int n,top,i;
	char s[10],ele;
public:
	stack()
	{
		top=-1;
	}
	void push();
	void dis();
	void pop();
	void peep();
	void change();
};

void stack::push()
{
	if(top>=2)
		cout<<"\nStack is overflow:";
	else
	{
		cout<<"\nEnter Character:";
		cin>>ele;
		if(((toascii(ele)>=65)&&(toascii(ele)<=92))||((toascii(ele)>=97)&&(toascii(ele)<=127)))
		{
			top++;
			s[top]=ele;
		}
		else
			cout<<"\nInvalid Character";
		}
}

void stack::dis()
{
	cout<<"\nElements in stack are:\n";
	for(i=top;i>=0;i--)
		cout<<s[i]<<"\t";
}

void stack::pop()
{
	if(top==-1)
	{
		cout<<"\nUnderflow";
		return ;
	}
	else
	{
		cout<<"\nPop elemnt is\t"<<s[top];
		top--;
	}
}

void stack::peep()
{
	cout<<"\nEnter position:";
	cin>>i;
	if((top-i+1)<0)
	{
		cout<<"\nUnderflow";
		return ;
	}
	else
		cout<<"\nPeep element is "<<s[top-i+1];
}

void stack::change()
{
	cout<<"\nEnter position ";
	cin>>i;
	if((top-i+1)<0)
	{
		cout<<"\nUnderflow";
	}
	else
	{
		cout<<"\nEnter element:";
		cin>>ele;
		s[top-i+1]=ele;
	}
}

void main()
{
	clrscr();
	stack s;
	int ch;
	cout<<"\n1. Push  2.Display  3.Pop  4.Peep  5.Change 6.Exit\n";
	while(ch!=6)
	{
		cout<<"\nEnter ch :";
		cin>>ch;
		switch(ch)
		{
		case 1: s.push(); break;
		case 2: s.dis(); break;
		case 3: s.pop(); break;
		case 4: s.peep();break;
		case 5: s.change();break;
		case 6: exit(0);
		}
	}
	getch();
}

