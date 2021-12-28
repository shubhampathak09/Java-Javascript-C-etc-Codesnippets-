// takw away game dp apprach

#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	
	int n=13;
	
	//take 1 , 2 or 3 stone
	
	// Alice is  to move, return if its winning or losing
	
	
	int dp[n+1];
	
	dp[0]=0;  //Alice is to move and has no stones to pick
	
//	dp[1]=1;
	
//	dp[2]=1;
	
//	dp[3]=1;
	
dp[1]=dp[2]=dp[3]=1;



for(int i=4;i<=n;i++){
	
	if(dp[i-1]==0||dp[i-2]==0||dp[i-3]==0)
	dp[i]=1;
	else
	dp[i]=0;
}	
	
	
if(dp[n]==0)
{
	cout<<"Alice Loses";
	}	
	else
	cout<<"Alice wins";
	
}
