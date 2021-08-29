package DP;

public class CountDistinictPalindromicSubsequences {


    public static void main(String[] args)
    {

        String s="abccbc";

        int n=s.length();


        int [][]  dp=new int[n][n];


        for(int g=0;g<n;g++)
        {
            for(int i=0,j=g;j<n;j++,i++)
            {
                if(g==0)
                {
                 dp[i][j]=1;
                }else if(g==1){
                    if(s.charAt(i)==s.charAt(j)){
                        dp[i][j]=3;
                    }else if(g==2)
                        dp[i][j]=2;
                    }else
                    {
                        if(s.charAt(i)==s.charAt(j)){
                            dp[i][j]=1+dp[i][j-1]+dp[i+1][j];
                        }else{
                            dp[i][j]=dp[i][j-1]+dp[i+1][j]+dp[i+1][j-1];
                        }
                    }
                }



            }

        System.out.println(dp[0][s.length()-1]);
        }


    }


