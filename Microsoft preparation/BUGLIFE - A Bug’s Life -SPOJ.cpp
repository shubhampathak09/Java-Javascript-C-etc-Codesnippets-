/*
BUGLIFE - A Bug’s Life
#graph-theory #graph #dfs

Professor Hopper is researching the sexual behavior of a rare species of bugs.
 He assumes that they feature two different genders and that they only interact with bugs of the opposite gender. 
In his experiment, individual bugs and their interactions were easy to identify, because numbers were printed on their backs.

Given a list of bug interactions, decide whether the experiment supports his assumption
 of two genders with no homosexual bugs or if it contains some bug interactions that falsify it.
 */
 

 
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>g(4000);
vector<int>visited(4000);
vector<int>color(4000);


bool isBipartite(int v,vector<vector<int>>&g,vector<int>&visited,vector<int>&color){
	
	for(auto x:g[v]){
		
		
		if(visited[x]==false){
			
			visited[x]=true;
			
			color[x]=!color[v];
			
			if(!isBipartite(x,g,visited,color))
			     return false;  
		}
		else if(color[x]==color[v])
		return false;
	}
	
	return true;
	
}

void solve(){
	
	int n,m;
	
	cin>>n>>m;
	
	
	for(int i=1;i<=m;i++){
		int a,b;
		cin>>a>>b;
		
		g[a].push_back(b);
		g[b].push_back(a);
		
		
		
		
	}
	
	for(int i=1;i<=n;i++){
		
			visited[i]=1;
			color[i]=0;
		
		if(!isBipartite(i,g,visited,color))
		{
		
			cout<<"Suspicious bugs found"<<endl;
			break;
		}
	}
	
	cout<<"No Suspicious bugs found";
}

int main(){
	
	
	solve();
	
} 
