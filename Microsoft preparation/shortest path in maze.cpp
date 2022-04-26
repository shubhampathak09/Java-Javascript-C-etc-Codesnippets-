// shortest path in maze
#include<bits/stdc++.h>
using namespace std;



bool issafe(vector<vector<int>>&maze,vector<vector<int>>&visited,int x ,int y){
	
	
return(x>=0&&x<maze.size()&&y>=0&&y<maze[0].size()&&visited[x][y]==0&&maze[x][y]==1)	;
	
	
}


void shortestPath(vector<vector<int>>&mat,vector<vector<int>>&visited,int i,int j,int x,int y,int &mindist,int dist){
	
	
	if(i==x&&j==y){
		
		mindist=min(mindist,dist);
		return;
		
	}
	
	visited[i][j]=1;
	
	if(issafe(mat,visited,i+1,j)){
		shortestPath(mat,visited,i+1,j,x,y,mindist,dist+1);
	}
	
		if(issafe(mat,visited,i-1,j)){
		shortestPath(mat,visited,i-1,j,x,y,mindist,dist+1);
	}
		if(issafe(mat,visited,i,j-1)){
		shortestPath(mat,visited,i,j-1,x,y,mindist,dist+1);
	}
		if(issafe(mat,visited,i,j+1)){
		shortestPath(mat,visited,i,j+1,x,y,mindist,dist+1);
	}
	
	visited[i][j]=0;
}

int main(){
	
	
	
	
}
