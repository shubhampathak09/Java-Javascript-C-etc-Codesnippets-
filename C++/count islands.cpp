// Find number of islands in graph

#include<bits/stdc++.h>
using namespace std;

int dx[]={0,1,0,0,1,-1,-1,1};
int dy[]={1,0,-1,-1,1,1,-1,-1};


int cc=0;


void dfs(int x,int y,vector<vector<int>>maze,vector<vector<bool>>&visited){
	
	visited[x][y]=1;
	
	for(int k=0;k<8;k++)
	{
		
		int newx=dx[k]+x;
		int newy=dy[k]+y;
	    
	//    cout<<maze[newx][newy]<<" "<<endl;
			
		if(newx>=0&&newx<maze.size()&&newy>=0&&newy<maze[0].size()&&visited[newx][newy]==0&&maze[newx][newy]==1)
		{
			dfs(newx,newy,maze,visited);
		}
		
	}
	
}


int countIslands(vector<vector<int>>maze){
	
	
	int n=maze.size();
	
	int m=maze[0].size();
	
	vector<vector<bool>>visited(n,vector<bool>(m));
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			visited[i][j]=0;
		}
	}
	
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(visited[i][j]==0)
			{
				visited[i][j]=1;
				dfs(i,j,maze,visited);
				cc++;
			}
		}
	}
	
	return cc;
}


int main()
{
	
	vector<vector<int>>maze={{1, 1, 0, 0, 0},
                   {0, 1, 0, 0, 1},
                   {1, 0, 0, 1, 1},
                   {0, 0, 0, 0, 0},
                   {1, 0, 1, 0, 1}};
               
			   
			   
			   cout<<countIslands(maze);
			   
			   }
               
        
        // review
        
