#include<bits/stdc++.h>
using namespace std;

#define V 5

void addEdge(int graph[][V],int u,int v)
{
	
	graph[u][v]=1;
}

int main()
{
	
	int graph[V][V]={0};
	
	
	//graph[0][1]=1;
	addEdge(graph,0,1);
	
	//graph[0][4]=1;
	addEdge(graph,0,4);
	
	
	
	//graph[1][4]=1;
	addEdge(graph,1,4);
	
	//graph[1][3]=1;
	addEdge(graph,1,3);
	
	//graph[3][4]=1;
	addEdge(graph,3,4);
	
	//graph[1][3]=1;
	addEdge(graph,1,3);
	//graph[3][2]=1;
	addEdge(graph,3,2);
	
	//graph[1][2]=1;
	addEdge(graph,1,2);
	
	cout<<"Adjacency Matrix"<<endl;
	
	for(int i=0;i<V;i++){
		
		for(int j=0;j<V;j++)
{
	     cout<<graph[i][j]<<" ";
	
		}
		cout<<endl;		
	}
	
}
