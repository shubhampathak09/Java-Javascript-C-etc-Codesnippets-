#include<bits/stdc++.h>
using namespace std;


vector<int>adj[10001];


vector<bool>visited(10001);



void dfs(int i)
{
	cout<<"Visiting.."<<i<<endl;
	visited[i]=true;
	
	for(auto x:adj[i]){
		
		if(visited[x]==false)
		{
			dfs(x);
		}
		
	}
	
}


void addEdge(int u,int v){
	
	adj[u].push_back(v);
	adj[v].push_back(u);
	
}

int main()
{
	int v=4;
	addEdge(0,1);
	addEdge(0,2);
	addEdge(1,2);
	addEdge(2,0);
	addEdge(2,3);
	addEdge(3,3);
	
	
	dfs(2);
	
	
	
}
