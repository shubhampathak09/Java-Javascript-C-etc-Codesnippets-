package DP;

public class LongestPalindromicSubstring {

    public static void main(String[] args)
    {

        String s="sdcsdfdcd";
        int n=s.length();

        int dp[][]=new int[n][n];

        int curlen=0;

        String ss="";
        for(int g=0;g<n;g++)
        {
            for(int i=0,j=g;j<n;j++,i++)
            {
                if(g==0)
                {
                    dp[i][j]=1;
                }else if(g==1)
                {
                    if(s.charAt(i)==s.charAt(j))
                    {
                        dp[i][j]=2;
                    }else{
                        dp[i][j]=0;
                    }
                }else
                {
                    if(s.charAt(i)==s.charAt(j))
                    {
                        if(dp[i+1][j-1]!=0)
                        dp[i][j]=2+dp[i+1][j-1];
                        else
                        dp[i][j]=0;
                    }else
                        dp[i][j]=0;
                }
                if(dp[i][j]>curlen)
                {
                    curlen=dp[i][j];
                    ss=s.substring(i,j+1);
                }
            }



        }
        System.out.println(curlen+" "+ss);


        // fixed the logic

    }


}
