// minesweeper

#include<bits/stdc++.h>
using namespace std;


int dx[]={1,1,0,-1,-1,-1,0,1};
int dy[]={0,1,1,1,0,-1,-1,-1};

bool inside(int i,int j,int &M,int&N){
	
	if(i<0 || i>=M || j<0 || j>=N)
	return false;
	
	return true;
}




int getAdjacentMines(int ci,int cj,vector<vector<char>>&B,int &M,int &N){


int minecount=0;

for(int i=0;i<8;i++){
	
	int ni=ci+dx[i];
	int nj=cj+dy[i];
	if(inside(ni,nj,M,N)&& B[ni][nj]=='M'){
		minecount++;
	}
}
return minecount++;
	
}

void expand(int ci,int cj,vector<vector<char>>&B,int &M,int &N){
	int adjMine=getAdjacentMines(ci,cj,B,M,N);
	
	if(adjMine==0){
		B[ci][cj]='B';
		
		
		for(int i=0;i<8;i++){
			int ni=ci+dx[i];
			int nj=cj+dy[i];
			if(inside(ni,nj,M,N)){
				expand(ni,nj,B,M,N);
			}
		}
		
	}
	else
	{
		B[ci][cj]='0'+adjMine;
	}
}

int main(){
	
	int M=board.size();
	int N=board[0].size();
	
    char cur= board[click[0]][click[1]];
    
	if(cur=='M'){
		printBoard(board);
	}
	
	
	if(cur=='E'){
		expand(click[0],click[1],board,M,N);
	}
	
	return board;
}
