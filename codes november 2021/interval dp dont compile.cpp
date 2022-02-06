// interval dpp problems
//mst(dp,0) initialize DP array

// given below is genral pseudocode for interval dp problems


// default syntaxz:-


// interval dp subproblems

//cand 

/*
l3n=2;len<=n len++
i=1;i<=n;i++
j=i+len-1
if(j>n)break
k=i;k<j;k++
min(dp[i][k],dp[i][k]+dp[k+1][j]+sum) //
*/

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


