// detect cycle in directed grapah

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>g(10001);
vector<bool>visited(10001);

bool checkcyle(int i,int parent)
{
	
	
	visited[i]=true;
	
	
	for(auto x:g[i]){
		
		
		if(x==parent)
		continue;
		
		else if(visited[x]==false)
		{
			return checkcyle(x,i);
		}
		else
		{
			return true;
		}
	}
	return false;
}


bool generalfunction()
{
	
	
	int n,m;
	
	cin>>n>>m;
	
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
		
		
	}
	
	
	for(int i=1;i<=n;i++)
	{
		if(visited[i]==false){
			if(checkcyle(i,-1))
			return true;;
		}
	}
	
	return false;
}

int main()
{
	
	generalfunction();
	
}
