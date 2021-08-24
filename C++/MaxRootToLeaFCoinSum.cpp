#include<bits/stdc++.h>
using namespace  std;

int n=14;

vector<vector<int>>adj(15);

int dp[15];

void dfs(int u,int parent,int a[14])
{

	dp[u]=a[u-1];
	
	int mx=0;
	
	for(auto x:adj[u])
	{
     	if(x==parent)
	    continue;
		
		dfs(x,u,a);
		
		mx=max(mx,dp[x]);		
	}
	
	dp[u]+=mx;
}


int main()
{
	
adj[1].push_back(2);
adj[2].push_back(1);

adj[1].push_back(3);
adj[3].push_back(4);

adj[1].push_back(4);
adj[4].push_back(1);

adj[2].push_back(5);
adj[5].push_back(2);

adj[2].push_back(6);
adj[6].push_back(2);


adj[3].push_back(7);
adj[7].push_back(3);

adj[4].push_back(8);
adj[8].push_back(4);

adj[4].push_back(9);
adj[9].push_back(4);

adj[4].push_back(10);
adj[10].push_back(4);

adj[5].push_back(11);
adj[11].push_back(5);

adj[7].push_back(13);
adj[13].push_back(7);

adj[7].push_back(14);
adj[14].push_back(7);


int a[]={3,2,1,10,1,3,9,1,5,3,4,5,9,8};	
	
dfs(1,-1,a);	


cout<<dp[1];
}
