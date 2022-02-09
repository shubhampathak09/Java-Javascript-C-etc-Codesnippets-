// lca

#include<bits/stdc++.h>
using namespace std;

int n,l;

vector<vector<int>>adj;

int timer;
vector<int>tin,tout;
vector<vector<int>>up;


void dfs(int v,int p){
	
	
	tin[v]=++timer;
	up[v][0]=p;
	
	for(int i=1;i<=l;++i){
		
		up[v][i]=up[up[v][i-1]][i-1];
		
	}
	
	for(int u:adj[v]){
		
		
		if(u!=p)
		dfs(u,v);
	}
	
	tout[v]=++timer;
	
}



bool is_ancestor(int u,int v){
	
	return tin[u]<=tin[v]&&tout[u]>=tout[v];
	
}


int lca(int u,int v){
	
	
	if(is_ancestor(u,v))
	return u;
	else if(is_ancestor(v,u))
	return v;
	else
	for(int i=l;i>=0;i--){
		
		if(!is_ancestor(up[u][i],v))
		u=up[u][i];
	}
	return up[u][0];
}

int main()
{
	
	
}




