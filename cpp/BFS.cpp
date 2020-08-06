////Assignment No 32:Implement BFS.


#include<iostream.h>
#include<conio.h>

class bfstree
{
	int reach[20],a[20][20],q[20],n,i,j,f,r,index;
public:
	bfstree()
	{
	 f=r=0;
	 index=1;
	}
	void get();
	void bfs();
};

void bfstree::get()
{
	cout<<"\nEnter number of vertices:";
	cin>>n;
	cout<<"\nEnter Adjacency matrix:";
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	{
	 reach[i]=0;
	 cin>>a[i][j];
	}
}

void bfstree::bfs()
{
	reach[1]=1;
	f++;
	r++;
	q[r]=index;
	cout<<"\nBFS is ";
	while(f<=r)
	{
	 index=q[f];
	 f++;
	 cout<<index<<"\t";
	  for(j=1;j<=n;j++)
	  {
	    if(a[index][j]==1 && reach[j]!=1)
	    {
		reach[j]=1;
		r++;
		q[r]=j;
	    }
	  }
	 }
}

void main()
{
	clrscr();
	bfstree b;
	b.get();
	b.dbfs();
	getch();
}

