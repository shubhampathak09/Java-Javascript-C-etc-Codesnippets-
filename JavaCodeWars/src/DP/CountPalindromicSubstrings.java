package DP;

public class CountPalindromicSubstrings {


    public static void main(String[] args)
    {


        String s="csdcvn";

        int n=s.length();

        int[][] dp=new int[s.length()][s.length()];

        int count=0;

        for(int g=0;g<s.length();g++)
        {
            for(int i=0,j=g;j<n;j++)
            {

                if(g==0)
                {
                    dp[i][j]=1;
                }else if(g==1)
                {
                    if(s.charAt(i)==s.charAt(j))
                    {
                        dp[i][j]=1;
                    }else
                        dp[i][j]=0;
                }
                else
                {
                    if(s.charAt(i)==s.charAt(j))
                    {
                        dp[i][j]=dp[i+1][j-1];
                    }else
                        dp[i][j]=0;
                }

                if(dp[i][j]==1)
                    count++;
            }
        }


        System.out.println("Count of Palindromic substrings is.."+count);
    }

}
