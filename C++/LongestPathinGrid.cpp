// Longest path in matrix

#include<bits/stdc++.h>
using namespace std;


bool is_safe(vector<vector<int>>&mat,vector<vector<bool>>&visited,int i,int j)
{
	
	if(i>=0&&i<mat.size()&&j>=0&&j<=mat[0].size()&&mat[i][j]==1&&visited[i][j]==0)
	{
		return true;
	}
	return false;
}

int maxpath;


int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

void findLongestPath(vector<vector<int>>&mat,vector<vector<bool>>&visited,int i,int j,int x,int y,int dist){
	
	
	if(mat[i][j]==0)
	return ;
	
	if(i==x&&j==y)
	{
		maxpath=max(maxpath,dist);
		return;
	}
	
	visited[i][j]=1;
	
	for(int k=0;k<4;k++)
	{
		
		
		int newx=i+dx[k];
		int newy=j+dy[k];
		
		if(is_safe(mat,visited,newx,newy))
		{
			findLongestPath(mat,visited,newx,newy,x,y,dist+1);
		}
		
	}
	
	visited[i][j]=0;
	
}
	
int main()
{
	
	
	vector<vector<int>>mat={
        { 1, 0, 1, 1, 1, 1, 0, 1, 1, 1 },
        { 1, 0, 1, 0, 1, 1, 1, 0, 1, 1 },
        { 1, 1, 1, 0, 1, 1, 0, 1, 0, 1 },
        { 0, 0, 0, 0, 1, 0, 0, 1, 0, 0 },
        { 1, 0, 0, 0, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 0 },
        { 1, 0, 0, 0, 1, 0, 0, 1, 0, 1 },
        { 1, 0, 1, 1, 1, 1, 0, 0, 1, 1 },
        { 1, 1, 0, 0, 1, 0, 0, 0, 0, 1 },
        { 1, 0, 1, 1, 1, 1, 0, 1, 0, 0 }
    };
    
    
    int srx=0;
    int sry=0;
    
    int destx=5;
    int desty=7;
    
    int m=mat.size();
    int n=mat[0].size();
	
	
	    vector<vector<bool>>visited;
    
    visited.resize(m,vector<bool>(n));
    
    
    findLongestPath(mat,visited,srx,sry,destx,desty,0);
    
    
    cout<<maxpath;
    
	
}
