#include<bits/stdc++.h>
using namespace  std;

int maxcount=0;


int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

bool isafe(int i,int j,vector<vector<int>>grid,vector<vector<bool>>visited){
	
	
	if(i>=0&&i<grid.size()&&j>=0&&j<grid.size()&&visited[i][j]==0&&grid[i][j]==1){
		return true;
	}
	return false;
}


void calldfs(int i,int j,int &count,vector<vector<bool>>visited,vector<vector<int>>grid)
{
	
	
	visited[i][j]=true;
	count++;
	
	 for(int k=0;k<4;k++)
	 {
	 	
	 	int newi=i+dx[k];
	 	int newj=j+dy[k];
	 	
	 	if(isafe(newi,newj,grid,visited)){
	 		calldfs(newi,newj,count,visited,grid);
		 }
	 	
	 }
	
}


int maxarea(vector<vector<int>>grid){
	
	int n=grid.size();
	int m=grid[0].size();
	
	
	vector<vector<bool>>visited(n,vector<bool>(m));
	
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			visited[i][j]=false;
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			
			if(isafe(i,j,grid,visited)&&visited[i][j]==false){
				int count=0;
				
				calldfs(i,j,count,visited,grid);
				if(count>maxcount)
				{
					maxcount=count;
				}
			}
			
		}
	}
	
	return maxcount;
}

int main()
{
	
	
	// GOt Afraid so did not test
	
	// You test and let me know :p
	
	
	
	
}
