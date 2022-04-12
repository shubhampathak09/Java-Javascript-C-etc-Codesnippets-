#include<bits/stdc++.h>
using namespace std;


vector<vector<int>>adj(1000);

vector<int>color(1000,2);

bool dfs(int u,int c){
	
	color[u]=c;
	for(auto x:adj[u]){
		
		if(x==u)continue;
		
		if(color[x]!=2){
			if(color[x]==c)
			return false;
		}
		if(dfs(x,1^c)==false)
		return false;
	}
	return true;
}

bool solve(){
	
	
	int n;
	cin>>n;
	
	adj.resize(n+1);
	color.resize(n+1,2);
	
	
	for(int i=1;i<=n;i++){
		
		if(dfs(i,0)==false)
		return false;
		
	}
	int count1=0;
	int count2=0;
	
	for(int i=1;i<=n;i++){
		cout<<color[i]<<" ";
		
		if(color[i]==0)
		count1++;
		else
		count2++;
	}
	
	if(count1>count2){
		cout<<count1<<endl;
	}else
	cout<<count2<<endl;
	
	return true;
}
int main(){
	
	
	solve();
	
}
