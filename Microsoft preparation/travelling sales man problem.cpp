// tsp problem

#include<bits/stdc++.h>
using namespace std;

int cost[21][21];
int dp[21][21];


int solve(int city,int mask,int n){
	
	if(city==n){
		return 0;
	}
	
	if(dp[city][mask]!=-1){
		return dp[city][mask];
	}
	
	int ans=INT_MAX;
	
	for(int j=2;j<n;j++){
		
		if(mask &(1<<j))
		ans=min(ans,cost[city][j] +solve(city+1,(mask ^ (1<<j)),n));
	}
	
	return dp[city][mask]=ans; 
}

int main(){
	
	int n;
	cin>>n ;
	
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>cost[i][j];
		}
	}
	
	
	int mask=(1<<n);
	
	int result=solve(1,mask,n);
	
	result+=cost[n][1];
	
	
	cout<<result;
	
	
	//tsp algorithm
}



// number unique bst

//  russian doll envelopees

// box tilling

// overallping bridges

//dice throw

//snake and  ladder

// minesweeper again


