#include<bits/stdc++.h>
using namespace std;

// Nim game 1 2 or 3 move you go first


bool simpleNim1(int n)
{
	
	return n%4==0 ? false : true;
	
}

bool simpleNim(int n)
{
	
	int dp[n+1];
	
    dp[0]=0;
    
    dp[1]=1;
    dp[2]=1;
    dp[3]=1;
    
    for(int i=4;i<=n;i++)
    {
    	
    	if(dp[i-1]==0||dp[i-2]==0||dp[i-3]==0){
    		dp[i]=1;
		}
    	else
    	dp[i]=0;
	}
       
	
	return dp[n];
}

int main()
{
	
	cout<<simpleNim(4)<<endl;
	
	cout<<simpleNim(18)<<endl;
	
	// cool
	
}
