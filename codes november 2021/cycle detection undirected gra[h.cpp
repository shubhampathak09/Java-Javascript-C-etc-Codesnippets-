// rou8nd trip
#include<bits/stdc++.h>
using namespace std;




int n,m;
int sv,ev;
vector<vector<int>>g;
vector<int>vis;
vector<int>parent;

bool dfs(int u,int p)
{
	vis[u]=1;
	parent[u]=p;
	
	for(auto x:g[u]){
		
		if(x==p) 
		continue;
		
		if(vis[x]){
			
			sv=x;
			 
			ev=u; 
			
			return true;
		}
		if(!vis[x]){
			if(dfs(x,u))
			return true;
		}
	}
	
	return false;
}


bool visit_all(){
	
	
	for(int i=1;i<=n;i++){
		
		if(!vis[i]){
			
		if(dfs(i,-1))
		return true;	
		}
	}
	return false;
}





int main(){
	
	
	cin>>n>>m;
	
	g.resize(n+1);
	vis.resize(n+1);
	parent.resize(n+1);
	
	for(int i=1;i<=m;i++){
		
	int a,b;
	cin>> a>>b;
	
	g[a].push_back(b);
	g[b].push_back(a);	
	}
	
	
	bool ans=visit_all();
	
//	cout<<ans;
	
	cout<<endl;
	
//	cout<<sv<<ev;
	
	int tv=ev;
	
	for(int i=1;i<=n;i++)
	cout<<parent[i]<<endl;
	
	
	/*
	while(tv!=sv){
		
		
		cout<<parent[tv]<<endl;
		
		tv=parent[sv];
	}
	*/
}



// check
/*
5 6
1 3
1 2
5 3
1 5
2 4
4 5
*/
