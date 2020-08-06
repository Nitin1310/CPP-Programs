////Assignment No 30:Calculate Indegree & outdegree of each vertex.


#include <iostream.h>
#include<conio.h>
#define MAX 10

/* a function to build an adjacency matrix of the graph*/
void buildadjm(int adj[][MAX], int n) 
{ 
int i,j; 
for(i=0;i<n;i++) 
for(j=0;j<n;j++) 
{ 
cout<<"Enter 1 if there is an edge from "<<i <<" to "<<j<<" otherwise enter 0 \n";
cin>>adj[i][j];
} 
} 

/* a function to compute outdegree of a node*/ 
int outdegree(int adj[][MAX],int x,int n) 
{ 
int i, count =0; 
for(i=0;i<n;i++) 
if( adj[x][i] ==1) 
count++; 
return(count); 
} 

/* a function to compute indegree of a node*/ 
int indegree(int adj[][MAX],int x,int n) 
{ 
int i, count =0; 
for(i=0;i<n;i++) 
if( adj[i][x] ==1) 
count++;
return(count);
}


void main()
{
clrscr();
int adj[MAX][MAX],node,n,i;
cout<<"\nEnter the number of nodes in graph maximum = "<<MAX;
cin>>n;
buildadjm(adj,n);
for(i=0;i<n;i++) 
{ 
cout<<"\nThe indegree of the node "<<i <<" is "<<indegree(adj,i,n);
cout<<"\nThe outdegree of the node "<<i <<" is "<<outdegree(adj,i,n);
}
getch();
}
