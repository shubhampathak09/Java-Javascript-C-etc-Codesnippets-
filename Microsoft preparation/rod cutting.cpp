
#include<bits/stdc++.h>
using namespace std;


int solve(int length[],int prices[],int n){
	
	
	int k=sizeof(length)/sizeof(length[0]);
	
	int m=sizeof(prices)/sizeof(prices[0]);
	
	
	
	
	int dp[k+1][m+1];
	
	
	for(int i=0;i<=k;i++){
		for(int j=0;j<=m;j++){
			if(i==0||j==0)
			dp[i][j]=0;
			else if(length[i-1]<=j){
				dp[i][j]=max(dp[i-1][j],prices[i-1]+dp[i][j-length[i-1]]);
			}
			else
			dp[i][j]=dp[i-1][j];	
			}
		}
	
	return dp[k][m];
}

int main(){
	
	int n=8;
	  int prices[] = { 1, 5, 8, 9, 10, 17, 17, 20 };
	int length[]={1,2,3,4,5,6,7,8};
	
	int ans=solve(length,prices,n);
	

    cout<<ans;	
}
