package DP;

import java.util.ArrayDeque;

public class PrintAllPathsWithMaxGold {


    private static class Pair{

        String psf;
        int i;
        int j;
        Pair(String psf,int i,int j)
        {
            this.psf=psf;
            this.i=i;
            this.j=j;
        }

    }

    public static void main(String[] args) {

        int[][] ar = {{3, 2, 3, 1}, {2, 4, 6, 0}, {5, 0, 1, 3}, {9, 1, 5, 1}};


        int[][] dp = new int[ar.length][ar[0].length];


        for(int j=ar[0].length-1;j>=0;j--){
            for(int  i=0;i<ar.length;i++){

                if(j==ar[0].length-1){

                    dp[i][j]=ar[i][j];

                }else if(i==0){

                    dp[i][j]=ar[i][j]+Math.max(dp[i][j+1],dp[i+1][j+1]);

                }
                else if(i==ar.length-1){

                    dp[i][j]=ar[i][j]+Math.max(dp[i][j+1],dp[i-1][j+1]);

                }else{

                    dp[i][j]=ar[i][j]+Math.max(dp[i][j+1],Math.max(dp[i+1][j+1],dp[i-1][j+1]));

                }

            }
        }

        int mx=Integer.MIN_VALUE;

        for(int i=0;i<dp.length;i++){
            if(dp[i][0]>mx){
                mx=dp[i][0];
            }
        }


        System.out.println(mx);


        ArrayDeque<Pair>queue=new ArrayDeque<>();

        for(int i=0;i<dp.length;i++){
            if(dp[i][0]==mx){
                queue.add(new Pair(i+"",i,0));
            }
        }

        //System.out.println(queue.size());

        while(queue.size()>0){

           Pair rem=queue.remove();

           //System.out.println(rem.psf);

           if(rem.j==ar[0].length-1){
            //   System.out.println(1);
               System.out.println(rem.psf+" "+ar[rem.i][rem.j]);
           }


           else if(rem.i==0){


               int mxi=Math.max(dp[rem.i][rem.j+1],dp[rem.i+1][rem.j+1]);

               if(dp[rem.i][rem.j+1]==mxi){
                   queue.add(new Pair(rem.psf+" d2", rem.i, rem.j+1));
               }
               if(dp[rem.i+1][rem.j+1]==mxi){
                   queue.add(new Pair(rem.psf+" d3",rem.i+1,rem.j+1));
               }


           }
           else if(rem.i==ar.length-1){

               int mxi=Math.max(dp[rem.i][rem.j+1],dp[rem.i-1][rem.j+1]);

               if(dp[rem.i][rem.j+1]==mxi){
                   queue.add(new Pair(rem.psf+" d2", rem.i, rem.j+1));
               }
               if(dp[rem.i-1][rem.j+1]==mxi){
                   queue.add(new Pair(rem.psf+" d3",rem.i-1,rem.j+1));
            }


           }else
           {
//            System.out.println(rem.i+" "+rem.j);

               int mxi=Math.max(dp[rem.i][rem.j+1],Math.max(dp[rem.i-1][rem.j+1],dp[rem.i+1][rem.j+1]));

               if(mxi==dp[rem.i][rem.j+1]){
                   queue.add(new Pair(rem.psf+" d2",rem.i,rem.j+1));
               }
               if(mxi==dp[rem.i-1][rem.j+1]){
                   queue.add(new Pair(rem.psf+" d1",rem.i-1,rem.j+1));
               }
               if(mxi==dp[rem.i+1][rem.j+1]){
                   queue.add(new Pair(rem.psf+" d3",rem.i+1,rem.j+1));
               }
           }



        }

    }




}
