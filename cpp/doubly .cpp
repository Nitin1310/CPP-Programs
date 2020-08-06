////Assignment No 22:Implement doubly linked list to store the student 
data.(Roll No, Name, Marks) & display it.



#include<conio.h>
#include<iostream.h>
#define N 100

class node
{
    private:
       char name[20];
       int rno,m1,m2,m3,tot;
       node *r,*l;
    public:
	void insert();
	void delnode();
	void display();

	void get()
	{
	 cout<<"\nEnter the student information";
	 cout<<"\nRollno  :-";
	 cin>>rno;
	 cout<<"\nName  :-";
	 cin>>name;
	 cout<<"Mark1   :-";
	 cin>>m1;
	 cout<<"Mark2   :-";
	 cin>>m2;
	 cout<<"Mark3   :-";
	 cin>>m3;
	 tot=m1+m2+m3;
	}

	void head()
	{
	 cout<<"\nStudent information";
	 cout<<"\nRollNo\tName\tMark1\tMark2\tMark3\ttotal";
	}

	void put()
	{
	 cout<<"\n";
	 cout<<rno<<"\t"<<name<<"\t"<<m1<<"\t"<<m2<<"\t"<<m3<<"\t"<<tot;
	}
};

node *temp,*start=NULL,*move,*prv;

void node::insert()
{

   node *node1=new node;
   node1->l=NULL;
   node1->get();
   node1->r=NULL;
   if(start==NULL)
   {
      start=node1;
   }
   else
   {
      move=start;
      while(move->r!=NULL)
	  move=move->r;
      node1->l=move;
      move->r=node1;
   }
}

void node::display()
{
   if(start==NULL)
   {
     cout<<"Doubli link list are empty";
   }
   else
   {
      head();
      move=start;
      while(move!=NULL)
      {
	  move->put();
	  move=move->r;
      }
   }
}

void main()
{
   clrscr();
   node n1;
   cout<<"1.Insert";
   cout<<"\n2.Dispaly";
   cout<<"\n3.Exit";
   int ch=0;
   while(ch!=3)
   {
      cout<<"\nEnter choice";
      cin>>ch;
      switch(ch)
      {
	case 1:n1.insert();
	       break;
	case 2:n1.display();
	       break;
	case 3:
		break;
		default:
	       cout<<"invalid";
	}
   }
   getch();
}


