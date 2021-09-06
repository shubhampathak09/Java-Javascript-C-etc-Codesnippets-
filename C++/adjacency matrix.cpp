#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	
	cin>>n>>m;
	
	int adj[n+1][n+1];
	
	
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
		adj[u][v]=1;
		adj[v][u]=1;
		
	}// adjacency matrix representation
	return 0;
	
	
}
