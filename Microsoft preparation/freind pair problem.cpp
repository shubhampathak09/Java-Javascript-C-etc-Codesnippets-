#include<bits/stdc++.h>
using namespace std;
/*
int solve(int n){
	
	if(n==1||n==0)
	return 1;
	
	int sl1=solve(n-1);
	int sl2= n-1*solve(n-2);
	
	return sl1+sl2;
	
	
	
}
*/


vector<int>dp(1000);

int solve(int n){
	
	dp[1]=1;
	dp[2]=2;
	
	for(int i=3;i<=n;i++){
		dp[i]=dp[i-1]+dp[i-2]*(i-1);
	}
	
	return dp[n];
}

int main(){
	
	cout<<solve(3);
	
}
