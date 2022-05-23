// network delay  time

#include<bits/stdc++.h>
using namespace std;

vector<vector<pair<int,int>>>g(10001);
vector<int>dist(10001,INT_MAX);
vector<int>visited(10001);


void solve(){
	
	
	vector<vector<int>>times={{2,1,1},{2,3,1},{3,4,1}};
	
	for(int i=0;i<times.size();i++){
		int wt=times[i][2];
		int a=times[i][0];
		int b=times[i][1];
		
		g[a].push_back({wt,b});
	
	int n=4;
	int k=2;
	dist[k]=0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
	
	pq.push({dist[k],k});
	
	while(!pq.empty()){
		
		auto p=pq.top();
		pq.pop();
		visited[p.second]=true;
		for(auto x:g[p.second]){
			
			if(visited[x.second]==false){
				
			visited[x.second]=true;
			if(dist[x.second]>x.first+dist[p.second]){
				dist[x.second]=x.first+dist[p.second];
				pq.push({dist[x.second],x.second});
			}	
			}
			
		}
		
		
	}
		
	// test here
}
}
 
 int main(){
 	
 	
 	//  TESTCODE GOES HERE
 }
