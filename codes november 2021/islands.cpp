#include<bits/stdc++.h>
using namespace std;


#define R 5
#define C 5

vector<vector<int>>grid(10001);

vector<vector<int>>visited(10001);


int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};

bool issafe(int i,int j,int n,int m){
	
	if(i<0||i>=n||j<0||j>=m||visited[i][j]==0)
	return false;
	else
	return true;
	
	
	
}


void dfs(int x,int y,int n,int m){
	
	
	visited[x][y]=1;
	
	for(int k=0;k<8;k++){
		
		int nx=x+dx[k];
		int ny=y+dy[k];
	//	cout<<nx<<" "<<ny<<endl;
		if(issafe(nx,ny,n,m)&&grid[nx][ny]==1){
			
			dfs(nx,ny,n,m);
		}
	}
	
	
}



int main(){
	
int count=0;	

//cout<<count;	
	
int n=5;
int m=5;

grid.resize(n,vector<int>(m));
visited.resize(n,vector<int>(m));

grid={{1,1,0,0,0},{0,1,0,0,1},{1,0,0,1,1},{1,0,1,0,1}};
visited={{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};

//cout<<visited[2][0];

// int count=0;
 
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		
		if(grid[i][j]==1&&visited[i][j]==0){
			dfs(i,j,n,m);
			count++;
		}
	}
} 
cout<<count;


//fml	
}	
 
	

