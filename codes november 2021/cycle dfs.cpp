#include<bits/stdc++.h>
using namespace std;

vector<int>visited;
vector<vector<int>>g;
vector<int>par;
int sv,ev;
int n,m;

bool checkCycle(int source,int parent)
{
	visited[source]=1;
	cout<<"here";
	par[source]=parent;
	
	for(auto x:g[source]){
		
		if(x==parent)
		continue;
		
		if(!visited[x]){
			if(checkCycle(x,source))
			return true;
		}
		
	}
	return false;
}

bool check(){
	
	for(int i=1;i<=n;i++){
		if(checkCycle(i,-1)==true)
		return true;
	}
	return false;
}

int main(){
	
	
	cin>>n>>m;
	
	g.resize(n+1);
	visited.resize(n+1);
	par.resize(n+1);
	
	for(int i=1;i<=m;i++){
		int a,b;
		cin>>a>>b;
		
		g[a].push_back(b);
		g[b].push_back(a);
	}
	
	for(int i=1;i<=n;i++){
		cout<<i<<" "<<par[i]<<endl;
	}
}
