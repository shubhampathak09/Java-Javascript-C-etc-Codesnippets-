#include<bits/stdc++.h>
using namespace std;


void wallsAndGates(vector<vector<int>>&rooms){
	
	
	int n=rooms.size();
	int m=rooms[0].size();
	
	vector<vector<int>>dist=rooms;
	
	for(int i=0;i<dist.size();i++){
		for(int j=0;j<dist[0].size();j++){
			if(dist[i][j]!=-1 || dist[i][j]!=0)
			dist[i][j]= INT_MAX;
		}
	}
	
	queue<pair<pair<int,int>,int>>q;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(rooms[i][j]==0)
			q.push({{i,j},0});
		}
	}
	
	
	while(!q.empty()){
		
		
		int n=q.size();
		
		
		for(int i=0;i<n;i++){
			
			auto x=q.front();
			q.pop();
			for(int k=0;k<4;k++){
				int newx=x.first.first+dx[k];
				int newy=x.first.second+dy[k];
				int dis=x.second;
				if(newx>=0&&newx<n&&newy>=0&&newy<m&&rooms[newx][newy]!=-1){
					
					dis=dis+1;
					if(dis<distance[newx][newy]){
						distance[newx][newy]=dis;
						q.push({newx,newy},distance[newx][newy]);
					}
				}
				
			}
		}
		
		
		
		
	}
	
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<dist[i][j]<<" ";
			
		}
		cout<<endl;
	}
}

int main(){
	
	vector<vector<int>>rooms;
	wallAndGates(rooms);
	
}
