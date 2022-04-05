// check for cycle bfs
#include<bits/stdc++.h>
using namespace std;

// check cyle in graph  using bfs

int solve(){
	
	int n,m;
	
	cin>>n>>m;
	
	vector<vector<int>>g(n);
	
	for(int i=1;i<=m;i++){
		
		int a,b;
		
		cin>>a>>b;
		
		g[a].push_back(b);
		g[b].push_back(a);
		
	}
	
	
	queue<pair<int,int>>q;
	
	q.push{0,-1};
	
	vector<int>parent(n);
	vector<int>visited(n);
	
	par[0]=-1;
	visited[0]=true;
	
	while(!q.empty()){
		
		
		//auto x=q.front();
		int vertex=q.front().first;
		int parent=q.front().seond;
		
		q.pop();
		
		for(int u:g[vertex]){
			
			if(!visited[u]){
				
				visited[u]=true;
				par[u]=vertex;
				q.push({u,vertex});
							}
		     else if(par!=u){
		     	return true;
			 }	
		}
		
	}
	return false;
}


bool iscycle(){
	
	// do for each vertex
	
}

int main(){
	
	//test
	
}
