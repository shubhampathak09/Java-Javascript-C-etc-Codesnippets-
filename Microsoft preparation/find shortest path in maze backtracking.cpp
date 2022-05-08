// sp in maze bt

#include<bits/stdc++.h>
using namespace std;


bool issafe(vector<vector<int>>&mat,vector<vector<bool>>&visited,int x,int y){
	
	
	return (x>=0&&x<mat.size()&&y>=0&&y<mat[0].size()&&mat[x][y]==1&&visited[x][y]==0);
	
}


void findsp(vector<vector<int>>&mat,vector<vector<bool>>&visited,int i,int j,int x,int y,int&min_dist,int dist){
	
	if(i==x&&j==y){
		min_dist=min(min_dist,dist);
		return;
	}
	
	visited[i][j]=true;
	
	if(issafe(mat,visited,i+1,j))
	findsp(mat,visited,i+1,j,x,y,min_dist,dist+1);
	
	if(issafe(mat,visited,i,j+1))
	 	findsp(mat,visited,i,j+1,x,y,min_dist,dist+1);
	 	
   	if(issafe(mat,visited,i-1,j))
	 	findsp(mat,visited,i-1,j,x,y,min_dist,dist+1);
		 
		if(issafe(mat,visited,i,j-1))
	 	findsp(mat,visited,i,j-1,x,y,min_dist,dist+1);	 
		 
		 
		visited[i][j]=false;  //backtrack
		 	 
}

int main(){
	
	
	 vector<vector<int>> mat =
    {
        { 1, 1, 1, 1, 1, 0, 0, 1, 1, 1 },
        { 0, 1, 1, 1, 1, 1, 0, 1, 0, 1 },
        { 0, 0, 1, 0, 1, 1, 1, 0, 0, 1 },
        { 1, 0, 1, 1, 1, 0, 1, 1, 0, 1 },
        { 0, 0, 0, 1, 0, 0, 0, 1, 0, 1 },
        { 1, 0, 1, 1, 1, 0, 0, 1, 1, 0 },
        { 0, 0, 0, 0, 1, 0, 0, 1, 0, 1 },
        { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
        { 1, 1, 1, 1, 1, 0, 0, 1, 1, 1 },
        { 0, 0, 1, 0, 0, 1, 1, 0, 0, 1 },
    };
    
    int m=mat.size();
    int n=mat[0].size();
    
    vector<vector<bool>>visited;
    visited.resize(m,vector<bool>(n));
    
    int min_dist=INT_MAX;
    
    int i=0;
    int j=0;
    int x=7;
    int y=5;
    

    findsp(mat,visited,0,0,7,5,min_dist,0);
    
    cout<<min_dist;
    
}

