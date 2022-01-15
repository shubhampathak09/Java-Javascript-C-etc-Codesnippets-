// shortest path unweighted graph


#include<bits/stdc++.h>
using namespace  std;


vector<vector<int>>g(10001);
vector<int>visited(10001);



int bfs(int src,int dest,vector<int>&path){
	
	
	//vector<int>path;
	
	visited[src]=1;
	int res=0;
	
	
	queue<int>q;
	q.push(src);
	
	path.push_back(src);
	
	while(!q.empty()){
		
		
		int u=q.front();
		q.pop();
			res=res+1;
		
		for(auto x:g[u]){
			
			
			if(visited[x]==0){
				
				visited[x]=1;
			
				path.push_back(x);
				q.push(x);
				
			}
			
			if(x==dest){
				
				return res;
				
			}
			
		}
		
	}
	
	return -1;
}

void solve(){
	
	int n,m;
	
	cin>>n>>m;
	
	
	for(int i=0;i<m;i++){
		
		
		int a,b;
		cin>>a>>b;
		
		g[a].push_back(b);
		g[b].push_back(a);
	}
		int src,dest;
		
		cin>>src>>dest;
		
		vector<int>path;
		
		int ans=bfs(src,dest,path);
		
		
		cout<<ans-1;
		
		cout<<endl;
		
	 
	
	
}

int main()
{
	
	
	solve();
	
}



/*
8 10
0 1
0 3
1 2
3 7
3 4
7 4
4 5
4 6
5 6
7 6
0 7

4
*/


// need some changes here !!
