package DP;

import java.util.ArrayDeque;

public class PrintAllMinJumps {


    private static class Pair{

        int i;   // index   //i
        int s;   // size of jumps allowed //arr[i]
        int j;   // actual size of  jump dp[i]
        String psf;

        Pair(int i,int s,int j,String psf)
        {

            this.i=i;
            this.j=j;
            this.s=s;
            this.psf=psf;

        }



    }

    public static void main(String[] args)
    {


        Integer[] arr={3,3,0,2,1,2,4,2,0,0};

        Integer[]dp=new Integer[arr.length];

        dp[arr.length-1]=0;

        for(int i=arr.length-2;i>=0;i--)
        {
            int steps=arr[i];

            int mn=Integer.MAX_VALUE;
            for(int j=1;j<=steps&&i+j<dp.length;j++)
            {
                if(dp[i+j]!=null&&(i+j)<dp.length){
                    mn=Math.min(mn,dp[i+j]);
                }
            }

            if(mn!=Integer.MAX_VALUE)
            dp[i]=mn+1;
        }

        System.out.println(dp[0]);
        // Min Jump Array  s


         ArrayDeque<Pair>queue=new ArrayDeque<>();

         queue.add(new Pair(0,arr[0],dp[0],0+""));


         while(!queue.isEmpty())
         {


             Pair rm=queue.removeFirst();


             if(rm.j==0)
             {
                 System.out.println(rm.psf);
             }

             for(int j=1;j<=rm.s&&rm.i+j<arr.length;j++)
             {
                 // go to place 1 less jump

                 int ci=rm.i+j;

                 if(dp[ci]!=null&&dp[ci]==rm.j-1){
                     queue.add(new Pair(ci,arr[ci],dp[ci],rm.psf+" -> "+ci));
                 }
             }


         }



    }

}
