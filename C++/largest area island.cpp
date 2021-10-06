// largest area


// Leetcode adobe 695	Max Area of Island

#include<bits/stdc++.h>
using namespace std;


int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};



int dfs(vector<vector<int>>&grid,int row,int col){
	
	
	int m=grid.size();
	int n=grid[0].size();
	
	int area=1;
	
    grid[row][col]=0;
	
			
	for(int i=0;i<4;i++)
	{
		int newx=row+dx[i];
		int newy=col+dy[i];
		
		if(newx>=0&&newx<m&&newy>=0&&newy<n&&grid[newx][newy]==1)
		{
		area+=dfs(grid,newx,newy);	
		}
	}
	return area;
}


int largestIsland(vector<vector<int>>grid){
	
	
	
	int m=grid.size();
	
	int n=grid[0].size();
	
	
	
	int maxarea=0;
	
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++){
			
			if(grid[i][j]==1){
				maxarea=max(maxarea,dfs(grid,i,j));
			}
		}
	}
	return maxarea;
}

//cool

int main()
{
	vector<vector<int>> grid = {{0,0,1,0,0,0,0,1,0,0,0,0,0},
                                {0,0,0,0,0,0,0,1,1,1,0,0,0},
                                {0,1,1,0,1,0,0,0,0,1,0,0,0},
                                {0,1,0,0,1,1,0,0,1,0,1,0,0},
                                {0,1,0,0,1,1,0,0,1,1,1,0,0},
                                {0,0,0,0,0,0,0,0,1,0,1,0,0},
                                {0,0,0,0,0,0,0,1,1,1,0,0,0},
                                {0,0,0,0,0,0,0,1,1,0,0,0,0}};
	
	
	
	
	cout<<"Largest Area Island = "<<largestIsland(grid);
	
}




