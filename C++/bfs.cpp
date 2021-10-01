#include<bits/stdc++.h>
using namespace std;

vector<int>adj[10001];

vector<bool>visited(10001);



//todo
void doBfs(int i)
{

queue<int>q;
q.push(i);
visited[i]=true;	

while(!q.empty()){
	
	int u=q.front();
	cout<<u<<" ";
	q.pop();
	for(auto x:adj[u]){
		if(visited[x]==false){
			visited[x]=true;
			q.push(x);
		}
	}
	
}	
	
}

int main()
{
	
	int n,m;
	
	cin>>n>>m;
	
	
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
	    adj[a].push_back(b);
		adj[b].push_back(a);	
		
	}
	
	
	for(int i=1;i<=n;i++)
	{
		if(visited[i]==false){
			doBfs(i);
		}
	}
	
}
