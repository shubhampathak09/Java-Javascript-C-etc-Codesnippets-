#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>adj(10001);

vector<bool>visited(10001);



bool checkcyle(int src,int parent)
{
	
	visited[src]=true;
	
	for(auto x:adj[src]){
		
		if(visited[x]==false)
		{
			if(checkcyle(x,src))
			return true;
		}
		else if(x!=parent){
			return true;
		}
	}
	return false;
}


bool cyclefun(){
	
	
	int n,m;
	
	cin>>n>>m;
	
	for(int i=1;i<=m;i++)
	{
		int a,b;
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	
	
	for(int i=0;i<n;i++)
	{
		if(!visited[i]){
			if(checkcyle(i,-1))
			return true;
		}
	}
	
	return false;
}


int main()
{
	
	
	cyclefun();
	
	
	
}
