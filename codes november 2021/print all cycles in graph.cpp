#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>g(10001);

vector<int>parent(10001);

vector<int>mark(10001);

vector<int>color(10001);

int cyclenumber;

void dfs(int u,int p){
	
	
if(color[u]==2){
	// completly visited
	return;
}
	
if(color[u]==1){
	
	
	cyclenumber++;
	
	int curr=p;
	
	mark[curr]=cyclenumber;
	
	while(curr!=u){
	
		curr=parent[curr];
	
		mark[curr]=cyclenumber;
	}
	return; // backtrack
}
	
parent[u]=p;

color[u]=1; // visiting

for(auto v:g[u]){
	
	if(v==parent[u])
	continue;
	
	dfs(v,u);
}

color[u]==2;
	
}

int main(){
	
	//cout<<"CFVFCVF"; TEST
	
}
