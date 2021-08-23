package DP;

public class MaxSummIncreasingSubsequence {

public static void main(String[] args)
{

    int ovmax=0;

    int[] arr={10,22,9,33,21,50,41,60,80,1};

    int n=arr.length;

    int[]dp=new int[arr.length];


    for(int i=0;i<n;i++)
    {
        int mx=0;
        for(int j=0;j<i;j++)
        {
            if(arr[i]>arr[j])
            {
                mx=Math.max(mx,dp[j]);
            }
        }
        dp[i]=mx+arr[i];

        if(dp[i]>ovmax)
            ovmax=dp[i];

    }

    System.out.println("Max increasing sum subseqenece is.."+ovmax);

}



}
