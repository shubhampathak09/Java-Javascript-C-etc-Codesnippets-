package DP;

public class LongestIncreasingSubsequence {

    public static void main(String[] args)
    {


        int[] arr={10,22,9,33,21,50,41,60,80};


        int n=arr.length;


        int[] dp=new int[n];


        for(int i=0;i<n;i++)
        {
            int mx=0;
            for(int j=0;j<i;j++)
            {
                if(arr[j]<arr[i])
                {
                    if(dp[j]>mx)
                    {
                        mx=dp[j];
                    }
                }
            }
            dp[i]=1+mx;
        }

    }




}
