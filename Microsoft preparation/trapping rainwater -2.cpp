// trapping rainwater

#include<bits/stdc++.h>
using namespace std;

int dx[4] ={1,0,-1,0};
int dy[4]={0,1,0,-1};

int main(){
	
	
	
	vector<vector<int>>mat={{1,4,3,1,3,2},{3,2,1,3,2,4},{2,3,3,2,3,1}};
	
	
	int n=mat.size();
	
	int m=mat[0].size();
	
	
	priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
	
	
	vector<vector<bool>>vis(n,vector<bool>(m,0));
	
	
	for(int i=0;i<n;i++){
		
		for(int j=0;j<m;j++){
			
			
			if(i==0 || j==0 || i==n-1 || j==m-1){
			
			pq.push({mat[i][j],{i,j}});
			vis[i][j]=true;
		}
		}
	}
	
	int res=0;
	
	while(!pq.empty()){
		
	  auto p =pq.top();
	  pq.pop();
	  
	  int val=p.first;
	  int x=p.second.first;
	  int y=p.second.second;	
		
	  for(int i=0;i<4; i++) {
	  	int newx=x+dx[i];
	  	int newy=y+dy[i];
	  	
	  	if(newx<0 || newx>=n || newy<0 ||newy>=m|| vis[newx][newy]==1) continue;
	  	vis[newx][newy]=1;
	  	
	  	res+=max(0,val-mat[newx][newy]);
	  	
	  	pq.push({max(val,mat[newx][newy]),{newx,newy}});
	  }	
		
	}
	
	
	cout<<res;
}
