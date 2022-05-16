// Maze

#include<bits/stdc++.h>
using namespace std;

bool hasPath(vector<vector<int>>&grid,int sx,int sy,int dx,int dy,set<pair<int,int>>s){
	
	int n=grid.size();
	int m=grid[0].size();
	queue<pair<int,int>>q;
	q.push({sx,sy});
	
	s.insert({sx,sy});
	
	while(!q.empty()){
		
		
		pair<int,int>curr=q.front();
		q.pop();
		int x=curr.first;
		int y=curr.second;
		
		if(x==dx &&y==dy)
		return true;
		
		int i=x;
		
		while(i+1<n && !grid[i+1][y])
		i++;
		if(!s.count({i,y})){
			s.insert({i,y});
			q.push({i,y});
		}
		
		 i=x;
	    	while(i-1>=0 && !grid[i-1][y])
		i--;
		if(!s.count({i,y})){
			s.insert({i,y});
			q.push({i,y});
		}
		
		 i=y;
			while(i+1<m && !grid[x][i+1])
		i++;
		if(!s.count({x,i})){
			s.insert({x,i});
			q.push({x,i});
		}
			 i=y;
	    	while(i-1>=0 && !grid[x][i-1])
		i--;
		if(!s.count({x,i})){
			s.insert({x,i});
			q.push({x,i});
		}
			
	}
	return false;
	
}

int main(){
	
	
	 vector<vector<int>> v = {{0,0,1,0,0},{0,0,0,0,0},{0,0,0,1,0},{1,1,0,1,1},{0,0,0,0,0}};
     pair<int,int>source {0,4};
	 pair<int,int>dest = {4,4};
	 
	 
	 set<pair<int,int>>s;
	 
	 int ans=hasPath(v,source.first,source.second,dest.first,dest.second,s);
	 
	 
	 cout<<ans;
	 
}
