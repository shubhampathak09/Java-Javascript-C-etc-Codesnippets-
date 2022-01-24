// Rotate a matrix by 90 degress clockwise

#include<bits/stdc++.h>
using namespace std;

#define n 4 

int main()
{
	
	
	int mat[][n]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			
			cout<<mat[i][j]<<" ";			
		}
		cout<<endl;
	} 
	
	
	
	for(int i=0;i<n;i++){
		
		for(int j=i;j<n;j++){
			
			int temp=mat[i][j];
			mat[i][j]=mat[j][i];
			mat[j][i]=temp;
		}
	}
	
	for(int j=0;j<n;j++){
		
		 int low=0;
		 int high=n-1;
		 
		 while(low<=high){
		 	
		 	int temp=mat[low][j];
		 	mat[low][j]=mat[high][j];
		 	mat[high][j]=temp;
		 	
		 	low++;
		 	high--;
		 	
		 }
		
	}
	
	
	cout<<endl;
	
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		cout<<mat[i][j]<<" ";
		}
		cout<<endl;
		}
		
		
		
	}
	
	
 
