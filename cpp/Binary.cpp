////Assignment No 28:Implement Binary Search.


#include<iostream.h>
#include<conio.h>
int a[10],n,x;
class array
{
	public:
	void in();
	void out();
	int bsearch();
};
void array::in()
{
	cout<<"Enter the size ";
	cin>>n;
	cout<<"Enter the ele in ascending order \n";
	for(int i=1;i<=n;i++)
	cin>>a[i];
}
void array::out()
{
	cout<<"\n Enter the ele for search ";
	cin>>x;
	bsearch();
}
int array::bsearch()
{
	int mid;
	int high=n;
	for(int low=1;low<=high;)
	{
	mid=(low+high)/2;
	if(x<a[mid])
		high=(mid-1);
	else if(a[mid]<x)
		low=(mid+1);
	else
	{
		cout<<" Successful search, location is "<<mid;
	return mid;
	}
}
cout<<"\n Unsuccessfull search";
return 0 ;
}
void main()
{
	clrscr();
	array a;
	a.in();
	a.out();
	getch(); }


