// spoj

#include<bits/stdc++.h>
using namespace  std;



priority_queue<pair<int,int>,veecto<pair<int,int>>,greater<pair<int,int>>>pq;


pq.push({0,src});
dist[src]=0;

// path constrict
//path recovet

while(!pq.empty()){
	
	
	int u=pq.top.second;
	pq.pop();
	
	
	for(auto x:g[u]){
		
		int ver=x.first;
		int dis=x.second;
		
		
		if(dist[ver]>dist[u]+dis){
			dist[ver]=dist[u]+dis;
			pq.push(dist[ver],ver);
		}
	}
	
}


int main(){
	

int n,c;
cin>>n>>c;


	
	
}
