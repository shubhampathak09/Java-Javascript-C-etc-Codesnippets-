#include<bits/stdc++.h>
using namespace std;

vector<vector<pair<int,int>>>g(10001);

vector<int>dist(10001,INT_MAX);

void solve(){
	
	
	int n,m;
	cin>>n>>m;
	
	for(int i=1;i<=m;i++){
		int a,b,w;
		cin>>a>>b>>w;
		g[a].push_back({b,w});
		g[b].push_back(make_pair(a,w));
	}
	
	
   priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
   
   int src=1;
   dist[src]=0;
   
   pq.push({0,src});   
   
   while(!pq.empty()){
   	
   	
   	 pair<int,int>p=pq.top();
   	pq.pop();
   	for(auto x:g[p.second]){
   		
      if(dist[src]+x.second<dist[x.first])
      {
	  
	  dist[x.first]=dist[src]+x.second;
	  pq.push({dist[x.first],x.first});   		
   }
	   }
   }
}


int main(){
	
	
	
}
