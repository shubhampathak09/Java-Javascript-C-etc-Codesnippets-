package DP;

public class LongestPalindromicSubsequence {


    public static void main(String[] args)
        {


            String s="abbabc";

            int n=s.length();

            int[][ ] dp=new int[n][n];


            for(int g=0;g<n;g++)
            {
                for(int i=0,j=g;j<n;i++,j++){

                    if(g==0)
                    {
                        dp[i][j]=1;
                    }
                    else if(g==1){
                        if(s.charAt(i)==s.charAt(j)){
                            dp[i][j]=2;
                        }else
                            dp[i][j]=1;
                    }else
                    {
                        if(s.charAt(i)==s.charAt(j)){
                            dp[i][j]=2+dp[i+1][j-1];
                        }else
                        {
                            dp[i][j]=Math.max(dp[i][j-1],dp[i+1][j]);
                        }
                    }
            }

              //  if(olen<dp[i][j]){
                   // plen=dp[i][j]
                }

            System.out.println(dp[0][n-1]);
            }


        }


