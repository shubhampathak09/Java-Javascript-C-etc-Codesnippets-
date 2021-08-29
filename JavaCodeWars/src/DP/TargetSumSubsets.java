package DP;

import java.util.ArrayDeque;

public class TargetSumSubsets {


    private static class Pair{

        int i;
        int j;
        String psf;

        Pair(int i,int j,String psf)
        {
            this.i=i;
            this.j=j;
            this.psf=psf;
        }

    }

    public static void main(String[] args)
    {


        int[] ar={2,3,5,6,8,10};
        int n=ar.length;

        int  tar=10;

        boolean[][] dp=new boolean[n+1][tar+1];


        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=tar;j++)
            {

                if(j==0)
                    dp[i][j]=true;
                else if(i==0)
                    dp[i][j]=false;
                else{

                    if(ar[i-1]<=j){
                        dp[i][j]=dp[i-1][j]||dp[i-1][j-ar[i-1]];
                    }else dp[i][j]=dp[i-1][j];

                }

            }
        }

        System.out.println(dp[n][tar]);

        ArrayDeque<Pair>queue=new ArrayDeque<>();

        queue.add(new Pair(n,tar,""));

        while(!queue.isEmpty()){

            Pair rem=queue.removeFirst();

            if(rem.i==0&&rem.j==0){
                System.out.println(rem.psf);
            }

            boolean exc=dp[rem.i-1][rem.j];

            if(exc==true){
                queue.add(new Pair(rem.i-1,rem.j, rem.psf));
            }


            if(ar[rem.i-1]<=rem.j)
            {
            boolean inc=dp[rem.i-1][rem.j-ar[rem.i-1]];

            if(inc==true) {


                queue.add(new Pair(rem.i - 1, rem.j - ar[rem.i - 1], ar[rem.i - 1] +" "+ rem.psf));
            }
            }

        }

    }


// some exception neeed to check!!
}
