package DP;

public class ClimbingStairs {

    // allowed paths 1 2 and 3 At a time


    public static void main(String[] args)
    {

        int n=4;

        int[] dp=new int[n+1];

        for(int i=0;i<=n;i++)
        {
            if(i==0)
            {
                dp[i]=1;
            }else if(i==1)
            {
                dp[i]=dp[i-1];
            }else if(i==2)
            {
                dp[i]=dp[i-1]+dp[i-2];
            }else{
                dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
            }
        }

        System.out.println(dp[n]);
    }

}
