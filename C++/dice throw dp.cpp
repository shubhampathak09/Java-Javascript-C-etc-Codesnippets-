// dice problem

#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	int dp[100001];
	
	
	memset(dp,0,sizeof(dp));
	
	dp[0]=1;
	
	int n=4;
	
	for(int i=1;i<=7;i++)
	{
		for(int j=1;j<=6;j++)
		{
			if(j>i)
			break;
			
			dp[i]+=dp[i-j];
			
		}
	}
	
	
	cout<<dp[7];
}
