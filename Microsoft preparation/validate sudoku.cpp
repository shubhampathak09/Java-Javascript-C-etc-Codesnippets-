// validate sudoku

#include<bits/stdc++.h>
using namespace std;


bool notInRow(int row,int arr[][9]){
	
	
	set<int>st;
	
	for(int i=0;i<9;i++){
		
		if(st.find(arr[row][i])!=st.end())
		return false;
		
		st.insert(arr[row][i]);
	}
	return true;
}


bool notInCol(int col,int arr[][9]){
	
	
set<int>st;

for(int i=0;i<9;i++){
	if(st.find(arr[i][col])!=st.end())
	return false;
	
	st.insert(arr[i][col]);
}	
return true;	
}


bool  notInBox(int sr,int sc,int arr[][9]){
	
	 sr=sr-sr%3;
	 sc=sc-sc%3;
	
	set<int>st;
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			
			int curr=arr[i+sr][j+sc];
			if(st.find(curr)!=st.end())
			return false;
			
			st.insert(curr);
			
		}
	}
	
	return true;
}

bool isvalid(int i,int j,int arr[][9]){
	
	
	return notInRow(i,arr)&&notInCol(j,arr)&&notInBox(i,j,arr);
	
}

int main(){
	
//	int board[9][9]={{5, 3, 4, 6, 7, 8, 9, 1, 2}, 
//                             {6, 7, 2, 1, 9, 5, 3, 4, 8},
//                             {1, 9, 8, 3, 4, 2, 5, 6, 7},
//                             {8, 5, 9, 7, 6, 1, 4, 2, 3},
//                             {4, 2, 6, 8, 5, 3, 7, 9, 1},
//                             {7, 1, 3, 9, 2, 4, 8, 5, 6},
//                             {9, 6, 1, 5, 3, 7, 2, 8, 4},
//                             {2, 8, 7, 4, 1, 9, 6, 3, 5},
//                             {3, 4, 5, 2, 8, 6, 1, 7, 9}}; 
//	
	
	
	int board[9][9]={{5, 3, 4, 6, 7, 8, 9, 1, 2}, 
                              {6, 7, 2, 1, 9, 0, 3, 4, 8},
                              {1, 0, 0, 3, 4, 2, 5, 6, 0},
                              {8, 5, 9, 7, 6, 1, 0, 2, 0},
                              {4, 2, 6, 8, 5, 3, 7, 9, 1},
                              {7, 1, 3, 9, 2, 4, 8, 5, 6},
                              {9, 0, 1, 5, 3, 7, 2, 1, 4},
                              {2, 8, 7, 4, 1, 9, 6, 3, 5},
                              {3, 0, 0, 4, 8, 1, 1, 7, 9}};
	
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			
		 if(isvalid(i,j,board)==false)
		 {
		 	cout<<"not valid sudoku config";
		 	return 0;
			 }	
			
		}
	}
	
	cout<<"Valid Sudoku config";
	
}
