#include<bits/stdc++.h>
using namespace std;

vector<bool>vis;
vector<vector<int>>g

void dfs(int u){
	
	vis[u]=true;;
	for(auto v:g[u]){
		
		if(!vis[v]){
			dfs(v);
		}
		
	}
	
}

int connected_comp(){
	
	
	int cc=0;
	
	for(int u=1;i<u<=n;u++){
		
		if(vis[u]==false){
			dfs(u);
			cc++;
		}
		
	}
	return cc;
	
}


// sp using df  not appicanle



void bs(int u){
	
	
	queue<int>bfs_q;
	
	bfs_q.push_back(u);
	
	
	dist[u]=0;
	vis[u]=true;
	
	while(!bfs_q.empty()){
		
		u=bfs_q.front(u);
		bfs_q.pop();
		
		
		for(auto v:g[u]){
			
			
			if(!vis[v]){
				
				
				bfs_q.push(v);
				vis[v]=true;
				dist[v]=dist[u]+1;
				
				
			}
			
		}
		
	}
	
	
	
	
}






int main(){
	
	
}
