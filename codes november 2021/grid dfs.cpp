#include<bits/stdc++.h>
using namespace std;



//vector<vector<int>>dirs={{0,-1},{-1,0},{0,1},{1,0}};

int dx[]={0,-1,0,1};
int dy[]={-1,0,1,0};	
	
	
//vector<vector<int>>visited(10001);	
	
int ctt=0;

void dfs(vector<vector<int>>&gridint i,int j,vector<vector<int>>&visited)

{
	if(i>=grid.size()||i<0||j>=grid.size()||j<0||visited[i][j]==1)
	return;
	
	visited[i][j]=1;
	
	for(int k=0;k<4;k++){
		int newx=i+dx[k];
		int newy=j+dy[k];
		
		if(!visited[newx][newy])
		{
			dfs(grid,newx,newy,visited);
			//count++;
		}
		
	}
	
}


int main()
{
	
 vector<vector<int> > grid = { { 1, 1, 0, 1, 1 },
                                  { 1, 0, 0, 0, 0 },
                                  { 0, 0, 0, 0, 1 },
                                  { 1, 1, 0, 1, 1 } };
	
	int sz=grid.size();
	
int  visited[sz][sz];

for(int i=0;i<sz;i++){
	for(int j=0;j<sz;j++){
		grid[i][j]=0;	}
}
}

for(int i=0;i<sz;i++){
	for(int j=0;j<sz;j++){
		if(visited[i][j]==0){
			dfs(grid,i,j,visited);
			ctt++;
		}
	}
}

cout<<ctt<<endl;

}

//shit
