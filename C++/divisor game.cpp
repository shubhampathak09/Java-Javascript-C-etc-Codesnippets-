//divisor game
#include<bits/stdc++.h>
using namespace std;


bool divisorGaame(int n,bool turn,int dp[][2]){
	
	if(n==1||n==3){
		return false;
	}
	
	if(n==2)
	{
		return true;
	}
	
	
	int ans=(turn==1) ? 0:1;
	
	for(int i=1;i*i<=n;i++)
	{
		if(n%i==0){
			if(turn){
				ans |=divisorGaame(n-i,0,dp);
			}else
			ans &= divisorGaame(n-i,1,dp);
		}
	}
	
	
	return dp[n][turn];
	
}

int main()
{
	
	
	 // initialise N
    int n = 3;
 
    int dp[n + 1][2];
 
    memset(dp, -1, sizeof(dp));
 
    if (divisorGaame(n, 1, dp) == true)
        cout << "Player A wins";
    else
        cout << "Player B wins";
 
    return 0;
}
