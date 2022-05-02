// n queens prroblems

#include<bits/stdc++.h>
using namespace std;


void printsol(int board[][20],int n){
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<board[i][j]<<" ";
		}
		cout<<endl;
	}
	
}

bool canPlace(int i,int j,int board[][20],int n){
	
	// check up
	for(int k=0;k<i;k++){
		if(board[k][j]==1){
			return false;
		}
	}
	
	int x=i;
	int y=j;
	
	while(x>=0&&y>=0){
		
		if(board[x][y]==1)
		return false;
		
		x=x-1;
		y=y-1;
		
	}
	
	x=i;
	y=j;
	while(x>=0&&y<n){
		if(board[x][y]==1)
		return false;
		x=x-1;
		y=y+1;
	}
	
	return true;
}

int solveNQueen(int board[][20],int i,int n){
	
	
	if(i==n){
		
		printsol(board, n);
		cout<<endl;
		return 1;
	}
	int ways=0;
	
	for(int j=0;j<n;j++){
		
		
		if(canPlace(i,j,board,n)){
			
			board[i][j]=1;
			
			ways+=solveNQueen(board,i+1,n);
			
 
			board[i][j]=0;
		}
	}
	return ways;
}	

int main(){
	
int board[20][20]={0};

int n;

cin>>n;

cout<<"Total number of solution are.."<<solveNQueen(board,0,n);


	
}
