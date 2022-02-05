// interval dpp problems
//mst(dp,0) initialize DP array

// given below is genral pseudocode for interval dp problems


// default syntaxz:-

for(int i=1;i<=n;i++)
{
    dp[i][i]=Initial value
}
for(int len=2;len<=n;len++)  //Interval length
for(int i=1;i<=n;i++)        //Enumeration starting point
{
    int j=i+len-1;           //End of interval
    if(j>n) break;           //End over
    for(int k=i;k<j;k++)     //Enumerate dividing points and construct state transition equations
    {
        dp[i][j]=max(dp[i][j],dp[i][k]+dp[k+1][j]+w[i][j]);
    }
}


