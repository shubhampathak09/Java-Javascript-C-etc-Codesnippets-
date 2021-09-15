#include<bits/stdc++.h>
using namespace std;


vector<vector<int>>adj(1000001);

vector<bool>visited(1000001);

vector<int>in(1000001),low(1000001);

vector<vector<int>>bridge;

int timer=0;

void dfs(int v,int p){
	
	//	cout<<v;
	
	visited[v]=true;

	in[v]=low[v]=timer++;
	for(auto x:adj[v]){
		
		if(x==p)
		{
			continue;
		}
		else if(visited[x]){
			low[v]=min(low[v],in[x]);
		}else
		{
			dfs(x,v);
			low[v]=min(low[v],low[x]);
			
			if(low[x]>in[v]){
		//		cout<<v<<" "<<x<<endl;
				vector<int>a={v,x};
				bridge.push_back(a);
			}
		}
	}
	
	
}
 
int main()
{
	
//	int n;
//	
//	cin>>n;
//	
	
	adj[0].push_back(1);
	adj[1].push_back(0);
	
	
	adj[1].push_back(2);
	adj[2].push_back(1);
	
	adj[2].push_back(0);
	adj[0].push_back(2);
	
	adj[1].push_back(3);
	adj[3].push_back(1);
	
	
 dfs(0,-1);
	
	
	for(int i=0;i<bridge.size();i++)
	{
		cout<<bridge[i][0]<<" "<<bridge[i][1];
		cout<<endl;
	}
	
//	cout<<"Bridges are"<<bridge.size();
	
}
