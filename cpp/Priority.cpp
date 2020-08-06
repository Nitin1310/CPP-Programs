////Assignment No 11: Implement Priority Queue using Array.


#include<iostream.h>
#include<conio.h>
#define SIZE 5
int PQ[SIZE],f=0,r=-1;	
PQinsert(int elem)
{
  int i;
  if(Qfull())
	cout<<”\n\n Overflow!!!”;
  else
	{
		i=r;
		++r;
		While(PQ[i]<=elem && i>=0)
		{
			PQ[i+1]=PQ[i];
			i--;
}
PQ[i+1]=elem;
}
}

int PQdelete()
{
	int elem;
	if(Qempty())
	{
		cout<<”Underflow!!!”;
	}
	else
     {
		elem=PQ[f];
		f=f+1;
		return(elem);
     }
}
display()
{
	Int I;
	If(Qempty())
	{
		Cout<<”Empty Queue”;
}
Else
{
	Cout<<”Front->”;
	For(i=f;i<=r;i++)
		Cout<<PQ[i];
		Cout<<”<-rear font=”font””;
}
}
Main()
{
	Int opn,elem;
Do
{
	Crscr();
	Cout<<”…Priority, Queue Operations(DSC order)…”;
	Cout<<”\nPress 1-Insert, 2-Delete, 3-Display, 4-Exit\n”;
	Cout<<”\nYou Option ?”;
	Cin>>opn;
	Switch(opn)
	{
	Case 1:cout<<”\nRead the element to be inserted ?”;
		Cin>>elem;
		PQinsert(elem); break;
	Case 2: elem=PQdelete();
		If(elem != -1)
			Cout<<”\nDeleted element is”<<elem; break;
	Case 3: cout<<”\nStatus of Queue”;
		display(); break;
	case 4: cout<<”\n Terminating”;
			break;
	default: cout<<”\nInvalid Option !”;
			break;
}
Cout<<”\n\nPress a key to continue..”;
Getch();
}while(opn !=4);
}

