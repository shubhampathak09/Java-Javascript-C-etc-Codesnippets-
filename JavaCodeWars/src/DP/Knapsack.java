package DP;

import java.util.ArrayDeque;

public class Knapsack {



    private static class Pair{
        int i;
        int j;
        String psf;
        Pair(int i,int j,String psf)
        {
            this.i=i;;
            this.j=j;
            this.psf=psf;
        }
    }

    public static void main(String[] args){


        int[] val = {60, 100, 120};
        int[] wt = {10, 20, 30};
        int w=50;

        int[][] dp=new int[val.length+1][w+1];

        for(int i=0;i<dp.length;i++)
        {
            for(int j=0;j<dp[0].length;j++)
            {

                if(i==0||j==0)
                    dp[i][j]=0;

                else{

                    if(wt[i-1]<=j) {
                        dp[i][j] =Math.max(val[i - 1] + dp[i - 1][j - wt[i - 1]],dp[i-1][j]);
                    }else
                        dp[i][j]=dp[i-1][j];
                }
            }


        }

//
//        for(int i=0;i<dp.length;i++){
//            for(int j=0;j<dp[0].length;j++)
//            {
//                System.out.println(dp[i][j]);
//            }
//        }


        System.out.println(dp[val.length][w]);
      //  System.out.println(dp[dp.length-1][dp[0].length-1]);

        ArrayDeque<Pair>queue=new ArrayDeque<>();

        queue.add(new Pair(val.length,dp[val.length][w],""));

        // To Do

    }








}


// recheck this something wrong with code
