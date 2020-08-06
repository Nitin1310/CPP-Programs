////Assignment No 5: Addition and Multiplication of Sparse Matrices.

#include<iostream.h>
#include <conio.h>
#define x 25
class sparce
{
 private:
		int a[x][x],b[x][x],c[x][x],m,n,p,q;
	public:
		void init();
		void input();
		void add();
		void mul();
		void display(int[25][25],int,int);
		void convert(int[25][25],int,int);
};
void sparce :: init ()
{
	int i,j;
	for(i=0;i<x;i++)
		for(j=0;j<x;j++)
			c[i][j]=0;
}
void sparce :: input()
{
 int i,j;
	cout<<"\nEnter order Of First matrix::";
 cin>>m>>n;	
 cout<<"\nEnter order Of Second matrix::";
	cin>>p>>q;
	cout<<"\nEnter"<<m*n<<"Elements Into First Matrix\n";
 for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
	cout<<"\nEnter"<<p*q<<"Elements Into Second Matrix\n";
	for(i=0;i<p;i++)
		 for(j=0;j<q;j++)
			cin>>b[i][j];
}
void sparce :: add ()
{
 int i, j;
	if(m==p && n==q)
	{
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				c[i][j] = a[i][j]+b[i][j];
				convert(c, m, n);
	}
	else
	cout<<"\nAddition Is Not Possible";
}
void sparce :: mul ( )
{
 int i,j,k;
 if(n==p)
	{
		 for(i=0;i<m;i++)
			 for(j=0;j<q;j++)
				 for(k=0;k<n;k++)
				c[i][j]+=a[i][k]*b[k][j];
					convert(c,m,n);
	}
	else
	cout<<"\n Multiplecation Is Not Possible";
}
void sparce :: display(int c[25][25], int m, int n)
{
	int i,j;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
				cout<<c[i][j]<<"\t";
				cout<<"\n";
		}
}
void sparce :: convert(int c[25][25],int m,int n)
{
 int i,j,k=1,t=0;
	int sp[25][25];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(c[i][j] != 0 )
			{
sp[k][0]= i;
sp[k][1]= j;
sp[k][2]= c[i][j];
k++;
t++;
			}
sp[0][0]=m;	
sp[0][1]=n;
sp[0][2]=t;
display(sp,k,3);
}
void main()
{
 sparce ob;
 clrscr();
 ob.init();
 ob.input();
 cout<<"\nAddition of Two Sparce Matrix\n";
 ob.add();
 ob.init();
 cout<<"\nMultiplication Of Two Sparce Matrix\n";
 ob.mul();
 getch(); 
}

