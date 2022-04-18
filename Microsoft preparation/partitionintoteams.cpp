//partiton into subsets

#include<bits/stdc++.h>
using namespace std;


int solveU(int n,int k){
	
	int dp[n+1][k+1];
	
	memset(dp,0,sizeof(dp));
	
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=k;j++){
    		
    		if(i<j) dp[i][j]=0;
    		else if(i==j)
    		dp[i][j]=1;
    		else
    		{
    			dp[i][j]=dp[i-1][j]*j +dp[i-1][j-1];
			}
    		
		}
	}
	
	return dp[n][k];
}



int solve(int n,int k){
	
	if(n==0)
	return 0;
	
	if(k==1)
	return 1;
	
	if(k==0)
	return 0;
	 
	if(n<k)
	return 0;
	
	return solve(n-1,k)*k +solve(n-1,k-1);
	
}

int main(){
	
	
	int n=5;
	int k=4;
	
	
	cout<<solveU(4,3);
	
}
