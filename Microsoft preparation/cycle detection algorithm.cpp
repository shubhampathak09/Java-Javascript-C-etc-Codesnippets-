#include<bits/stdc++.h>
using namespace std;

int n,m;

int sv;
int ev;

vector<veector<int>>g;

vector<int>vis;
vector<int>par;

bool dfs(int int u,int p)
{
	par[u]=p;
	vis[u]=1;
	
	for(auto v:g[u]){
		
		if(v==p)
		continue;
		
		if(vis[v]){
			
			sv=v;
			ev=u;
			return true;
		}
		
		if(!vis[v]){
			
			if(dfs(v,u))
			return true;
			
		}
		
	}
	return false;
}

// simple cycle detected algo


bool vist_all(){
	
	for(int i=1;i<=n;i++){
		
		if(!vis[i]){
			if(dfs(1,-1))return true;
		}
	}
	return false;
}

int main(){
	
	
	int tv=ev;
	
	vector<int>ans;
	
	ans.push_back(ev);
	
	while(tv!=sv){
		
		ans.push_back(parent[tv]);
		tv=parent[tv];
		
	}
	ans.push_back(ev);
	
	
	cout<<ans.size();
	
	
	for(auto x:ans){
		
		
		cout<<x<<" ";
	}
	
	
}
