// check if graph is bipartite

#include<bits/stdc++.h>
using namespace std;


vector<vector<int>>g(10001);
vector<int>visited(10001);
vector<int>color(10001);

bool isBipartite(int v,vector<vector<int>>g,vector<int>&visited,vector<int>&color)
{
	
	for(auto x:g[v]){
		
		if(visited[x]==false){
			
			visited[x]=true;
			
			color[x]=!color[v];
			
			
			if(!isBipartite(x,g,visited,color))
			{
				return false;
			}
		}
		else if(color[x]==color[v])
	            return false;	
	}  
	
	return true;
	
}



int main(){
	
 int n=6;
 
 g[1].push_back(2);
 g[2].push_back(1);
 g[3].push_back(4);
 g[4].push_back(3);
 g[4].push_back(5);
 g[5].push_back(4);
 g[5].push_back(6);
 g[6].push_back(5);
 g[6].push_back(1);
 g[1].push_back(6);
 
 
 visited[1]=true;
 color[1]=0;
 
 int ans=isBipartite(1,g,visited,color);
 
  ans == 1 ? cout<< "graph is bipartite" : cout<< "graph is not bipartite";
 

	
	
}
