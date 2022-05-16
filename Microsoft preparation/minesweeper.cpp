// minesweeper

#include<bits/stdc++.h>
using namespace std;



bool inside(int i,int j,int &M,int&N){
	
	if(i<0 || i>=M || j<0 || j>=N)
	return false;
	
	return true;
}




int getAdjacentMines(int ci,int cj,vector<vector<char>>&B,int &M,int &N,vector<vector<int>>dirs){


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

int main(){
	
	
}
