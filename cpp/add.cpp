//Assignment No 4: Addition and Multiplication of two Polynomials.


#include<iostream.h>
#include<conio.h>
#define n 100
class poly
{
 private:
 int a[n], b[n], add[n], mul[n], p, q, at;
	public:
		void init();
		void input();
		void process();
		void display();
};
void poly :: init()
{
	int i;
	for(i=0;i<n;i++)
		a[i]=b[i]=add[i]=mul[i]=0;
}
void poly :: input()
{
	int i;
	cout<<"\nEnter Degree Of First Polynomial::";
	cin>>p;
	cout<<"\nEnter Degree Of Second Polynomial::";
	cin>>q;
	cout<<"\nEnter Values First Polynomial\n";
	for(i=0;i<=p;i++)
	{
		cout<<"\nEnter X^"<<i<<" Th Coefficient";
		cin>>a[i];
	}
	cout<<"\nEnter Values First Polynomial\n";
	for(i=0;i<=q;i++)
	{
		cout<<"\nEnter X^"<<i<<" Th Coefficient";
		cin>>b[i];
	}
}
void poly :: process ( )
{
	int i,j;
	if( p > q )
		at = p;
	else
		at = q;
	for (i=0;i<=at;i++)
		add[i] = a[i] + b[i];
		for(i=0;i<= p;i++)
			for(j=0;j<=q;j++)
				 mul [i+j] += a [i] * b [j];
}
void poly :: display ( )
{
 int i;
cout<<"\Addition Of Two Polynomial Expressions Are\n\n";
for(i=at;i>=0;i--)
cout<<add[i]<<"X^"<<i<<"+";
cout<<"\n\nMultiplecation Of Two Polynomial Expressions Are\n\n";
for(i=p+q;i>= 0;i --)
cout<<mul[i]<<"X^"<< i <<"+";
}

void main()
{
poly ob;
clrscr ( );
ob.init ( );
ob.input ( );
ob.process ( );
ob.display ( );
getch ( );
}


