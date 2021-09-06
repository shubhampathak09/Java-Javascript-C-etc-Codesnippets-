#include<bits/stdc++.h>
using namespace std;

int cnt;

vector<int>adj[10001];

//vector<int>visited(10001);

vector<int>top(10001);

vector<int>indegree(10001);

void solve()
{

int n,m;
cin>>n>>m;	

queue<int>q;


for(int i=1;i<=m;i++)
{
	int a,b;
	cin>>a>>b;
	adj[a].push_back(b);
	
	}	
	
	for(int i=1;i<=n;i++)
	{
		for(auto x:adj[i]){
			indegree[x]++;
		}
	}
	
	for(int i=1;i<=n;i++)
	{
		if(indegree[i]==1){
			q.push(i);
		}
	}
	
	while(!q.empty()){
		
		cnt++;
		auto i=q.front();
		top.push_back(i);
		
		for(auto x:adj[i]){
			indegree[x]=indegree[x]-1;
			
			if(indegree[x]==0){
				q.push(x);
			}
		}
		
	}
	
	if(cnt!=n){
		cout<<"graph has cycle so no top sort possible";
		return;
	}
	
	for(auto x:top)
	{
		cout<<x<<" ";
	}
	
}

int main()
{
	
solve();
	
	
}
