#include<bits/stdc++.h>
using namespace std;

int n,m;

vector<vector<int>>g(10001);

vector<int>parent(10001);

vector<int>mark(10001);

vector<int>color(10001);

vector<int>cycles[10001];


int cyclenumber;

void dfs(int u,int p){
	
	
if(color[u]==2){
	// completly visited
	return;
}
	
if(color[u]==1){
	
	
	cyclenumber++;
	
	int curr=p;
	
	mark[curr]=cyclenumber;
	
	while(curr!=u){
	
		curr=parent[curr];
	
		mark[curr]=cyclenumber;
	}
	return; // backtrack
}
	
parent[u]=p;

color[u]=1; // visiting

for(auto v:g[u]){
	
	if(v==parent[u])
	continue;
	
	dfs(v,u);
}

color[u]==2;
	
}

int main(){
	
	
	cin>>n>>m;
	
	for(int i=1;i<=m;i++){
		int a,b;
		cin>>a>>b;
		
		g[a].push_back(b);
		g[b].push_back(a);
	}
	
	
	for(int i=1;i<=n;i++){
         if(color[i]!=2)
		 dfs(i,-1);		
	}
	
	//cout<<"CFVFCVF"; TEST
for(int i=1;i<=n;i++){
	
	if(mark[i]!=0){
		cycles[mark[i]].push_back(i);
	}

}


for(int i=1;i<=cyclenumber;i++){
//	cout<<"cycle..";
	for(int x:cycles[i]){
		cout<<x<<" ";
	}
	cout<<endl;
}
	
}
