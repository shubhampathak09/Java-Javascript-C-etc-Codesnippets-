package DP;

import java.util.ArrayDeque;

public class AllMinPaths {


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

    public static void main(String[] args){


        int[][] arr={{0,1,4,2,8,2},{4,3,6,5,0,4},{1,2,4,1,4,6},{2,0,7,3,2,2},{3,1,5,9,2,4}};




     int n=arr.length;
     int m=arr[0].length;

     int[][] dp=new int[n][m];


     for(int i=dp.length-1;i>=0;i--)
     {
         for(int j=dp[0].length-1;j>=0;j--)
         {
             if(i==dp.length-1&&j==dp[0].length-1)
             {
                 dp[i][j]=arr[i][j];
             }else if(i==dp.length-1){
                   dp[i][j]=arr[i][j]+dp[i][j+1];
             }else if(j==dp[0].length-1){
                     dp[i][j]=arr[i][j]+dp[i+1][j];
             }else
             {
                  dp[i][j]=arr[i][j]+Math.min(dp[i+1][j],dp[i][j+1]);
             }
         }
     }

     // bfs

        ArrayDeque<Pair>queue=new ArrayDeque<>();

     queue.add(new Pair("",0,0));

     while(!queue.isEmpty()){

         Pair rm=queue.removeFirst();

         if(rm.i==dp.length-1&& rm.j==dp[0].length-1){

             System.out.println(rm.psf);


         }else if(rm.i==dp.length-1){
              queue.add(new Pair(rm.psf+"H",rm.i,rm.j+1));
         }else if(rm.j==dp[0].length-1){

             queue.add(new Pair(rm.psf+"V",rm.i+1,rm.j));

         }else{

             if(dp[rm.i][rm.j+1]<dp[rm.i+1][rm.j]){
                       queue.add(new Pair(rm.psf+"H",rm.i,rm.j+1));
             }else if(dp[rm.i][rm.j+1]>dp[rm.i+1][rm.j]){
                       queue.add(new Pair(rm.psf+"V",rm.i+1,rm.j));

             }else{
                 queue.add(new Pair(rm.psf+"H",rm.i,rm.j+1));
                 queue.add(new Pair(rm.psf+"V",rm.i+1,rm.j));
             }

         }


     }



    }

}
