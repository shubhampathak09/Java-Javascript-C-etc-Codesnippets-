// topological sort
#include<bits/stdc++.h>
using namespace std;

vector<int>graph[10001];
vector<int>visited(10001);

void dfs(int node,vector<int>graph[],vector<int>&visited,stack<int>&s)
{
	
	visited[node]=true;
	
	for(auto x: graph[node]){
		
		if(!visited[x]){
			
			dfs(x,graph,visited,s);
			
		}
	}
	
//	cout<<node;
	
	s.push(node);
}


void topsort(){
	
	
	int n,m;
	
	cin>>n>>m;
	
	
	for(int i=0;i<m;i++){
		
		int a,b;
		cin>>a>>b;
		graph[a].push_back(b);
//		g[b].push_back(a);
	}
	
	stack<int>s;
	
	for(int i=0;i<n;i++){
		
    if(!visited[i])	
	dfs(i,graph,visited,s);
	
}
	while(!s.empty()){
		
		cout<<s.top()<<" ";
		s.pop();
	}
}

int main(){
	
	topsort();
	
	
	
}


/*
6 6
5 0
4 0
5 2
2 3
3 1
4 1

5 4 2 3 1 0
*/

