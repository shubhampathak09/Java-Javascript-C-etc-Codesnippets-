// bulding team
// bipartitre graphs
// 2 color prroblem


//  critical when we have some contracdiction

// if we encounter some contractdiction then impossible to colr


// impl

#include<bits/stdc++.h>
using namespace  std;


int n,m,a,b;


vector<vector<int>>g;

vector<int>colr;

vector<bool>vis;

vector<int>parent;

// very importaant algo

bool dfs(int i,int c,int par){
	
	cout<<c<<endl;
	
	vis[i]=true;
	
	colr[i]=c;
	
	parent[i]=par;
	
	for(auto x:g[i]){
		
		if(x==par)continue;
		
		if(colr[x]==0)
		{
			if(!dfs(x,colr[i]^3,i))
			return false;
		}
		if(colr[x]==colr[i])
		return false;
	}
	return true;
}

bool color_all(){
	
	
	for(int i=1;i<=n;i++){
		
		if(!vis[i]){
			
			bool solve=dfs(i,1,-1);
			if(solve==false)
			return false;
		}
	}
	return true;
}


int main(){
	
	
	 	cin>>n>>m;
	
	
	g.resize(n+1);
//	lead.resize(n+1);
	colr.resize(n+1);
	
	vis.resize(n+1);
	
	parent.resize(n+1);
	
	for(int i=1;i<=m;i++){
		
		int a,b;
		cin>>a>>b;
		
		g[a].push_back(b);
		g[b].push_back(a);
		
		
	}
	
	
	bool solve=color_all;
	
	
	cout<<solve<<endl;
	
	if(color_all){
		for(int i=1;i<=n;i++){
			cout<<colr[i]<<" ";
		}
	}
	
}


// going rech this

/*
5 3
1 2
1 3
4 5
*/
