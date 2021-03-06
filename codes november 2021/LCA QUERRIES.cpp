// lca querries

#include<bits/stdc++.h>
using namespace std;

int n,l;

vector<vector<int>>adj;

vector<int>tin,tout;

vector<vector<int>>up;

int timer;


int dfs(int v,int p){
	
	tin[v]=++timer;
	up[v][0]=p;
	
	for(int i=1;i<=l;i++){
		up[v][i]=up[up[v][i-1]][i-1];
	}
	for(int u:adj[v]){
		if(u!=p){
			dfs(u,v);
		}
	}
	tout[v]=++timer;
}


bool is_ancestor(int u,int v){
	
	return tin[u]<=tin[v]&&tout[u]>=tout[v];
	
}


int lcs(int u,int v){
	
	if(is_ancestor(u,v)){
		return u;
	}
	if(is_ancestor(v,u)){
		return v;
	}
	for(int i=l;i>=0;--i){
		
		if(!is_ancestor(up[u][i],v))
		u=up[u][i];
	}
	return up[u][0];
}

void preprocess(int root){
	
	tin.resize(n+1);
	tout.resize(n+1);
	timer=0;
	l=ceil(log2(n));
	up.assign(n+1,vector<int>(l+1));
	
	dfs(root,root);
	
}

int main(){
	
	n=7;
	adj.resize(n+1);
	
	adj[1].push_back(2);
	adj[2].push_back(1);
	
	adj[1].push_back(3);
	adj[3].push_back(1);
	
	adj[2].push_back(4);
	adj[4].push_back(2);
	
	adj[2].push_back(5);
	adj[5].push_back(2);
	
	adj[3].push_back(6);
	adj[6].push_back(3);
	
	adj[3].push_back(7);
	adj[7].push_back(3);
	
	
	preprocess(1);  //fml  
	
	
	// fixed  // had to change n to n+1
	
	
	cout<<lcs(4,5)<<endl;
	
	cout<<lcs(4,6)<<endl;
	
	cout<<lcs(3,4)<<endl;
	
	cout<<lcs(2,4)<<endl;
	
	
	// Noice
	
}
