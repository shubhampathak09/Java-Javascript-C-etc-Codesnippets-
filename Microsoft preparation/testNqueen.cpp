#include<bits/stdc++.h>
using namespace  std;

bool globalCounter=0;


void printb(int n,int board[][20]){
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<board[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}


bool safe(int board[][20],int n,int i,int j){
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


int solveQueen(int n,int board[][20],int i)
{
		
	
	if(i==n){
       // globalCounter++;		
		printb( n,board);
		return 1;
	}
	
	int ways=0;
	
	for(int j=0;j<n;j++){
		
		
		if(safe(board,n,i,j)==true){
			
			board[i][j]=1;
			
			ways+=solveQueen(n,board,i+1);
			//bool solve=solveQueen(n,board,i+1);
		 
		 
			board[i][j]=0;
		}
	}
	return ways;
}
//
//bool solveQueen(int n,int board[][20],int i){
//	
//	
//	if(i==n){
//		
//		printb(n,board);
//		return true;
//	}
//	
//	for(int j=0;j<n;j++){
//		
//		if(safe(board,n,i,j)){
//			board[i][j]=1;
//			bool sucess=solveQueen(n,board,i+1);
//			if(sucess==true){
//				return true;
//			}
//			board[i][j]==0;
//		}
//		
//	}
//	return false;
//}

int main(){
	
	int n=8;
	
	int board[20][20]={0};
	
	bool ans=solveQueen(n,board,0);
	
	cout<<ans;
	
//	cout<<globalCounter;
	
}
