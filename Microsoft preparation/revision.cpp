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


int main(){
	
	
}
