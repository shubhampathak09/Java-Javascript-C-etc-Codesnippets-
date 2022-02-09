#include<bits/stdc++.h>
using namespace std;


#define R 5
#define C 5

 int dx[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
 int dy[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
 

//int dx[]={};
//int dy[]={};


bool issafe(int mat[R][C],int i,int j,bool vis[R][C]){
	
	
	if(i<0||i>=R||j<0||j>=C||mat[i][j]==0||vis[i][j]==1)return false;
	
	return true;
	
	
}



void dfs(int x,int y,int mat[R][C],bool vis[R][C]){
	
	vis[x][y]=1;
	for(int k=0;k<8;k++){
		
		int newx=dx[k]+x;
		int newy=dy[k]+y;
		
		if(issafe(mat,newx,newy,vis)){
			dfs(newx,newy,mat,vis);
		}
		
	}
}



int main()
{


int mat[R][C]={{1,1,0,0,0},{0,1,0,0,1},{1,0,0,1,1},{0,0,0,0,0},{1,0,1,0,1}};

bool vis[R][C];

for(int i=0;i<R;i++){
	for(int j=0;j<C;j++){
		vis[i][j]=0;
	}
}

int count=0;

for(int i=0;i<R;i++){
	for(int j=0;j<C;j++){
		
		if(mat[i][j]==1&&vis[i][j]==0){
			dfs(i,j,mat,vis);
			count++;
		}
	}
} 
	
cout<<"Total islandds in gaph.."<<count;
	
}

