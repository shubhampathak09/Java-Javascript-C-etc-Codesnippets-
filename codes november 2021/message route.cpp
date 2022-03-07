// bfs shortest path

#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<vector<int>>g;
vector<int>parent; 
vector<bool>vis;


void bfs(){
	
	vis[1]=true;
	queue<int>q;
	q.push(1);
	
	while(!q.empty()){
		
		
		int u=q.front();
		q.pop();
		
		for(auto x:g[u]){
			if(!vis[x]){
				
				vis[x]=true;
				parent[x]=u;
				q.push(x);
			}
		}
	}
	
}

int main(){
	
	cin>>n>>m;
	
	g.resize(n+1);
	parent.resize(n+1);
	vis.resize(n+1);
	
	
	
	for(int i=1;i<=m;i++){
		int a,b;
		cin>>a>>b;
		
		g[a].push_back(b);
		g[b].push_back(a);
	}
	 
	parent[1]=-1;
	
	 
	// trace back
	
	
	int current=n; 
    stack<int>stk;
	 
    
	bfs();
	
		 
	while(current!=-1){
		
	stk.push(current);
	current=parent[current];
		
		
	}
	
	
	cout<<stk.size();
	
	cout<<endl;
	
	while(!stk.empty()){
		
		cout<<stk.top()<<" ";
		stk.pop();
	}
	 
	 

	 // test case
/*	 
5 5
1 2
1 3
1 4
2 3
5 4
//3
//1 4 5

*/

}
