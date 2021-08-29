package DP;

import java.util.ArrayDeque;

public class PrintAllLongestIncreasingSubsequences {

    public  static class Pair{
        int i;   // index
        int l;   // lngth of lis
        int val;  // value
        String psf;  //string
        Pair(int i,int l,int val,String psf){
            this.i=i;
            this.l=l;
            this.val=val;
            this.psf=psf;
        }

    }

    public static void main(String[] args)
    {

        int[] arr={10,22,9,33,21,50,41,60,80,1};

        int n=arr.length;

        int ovmax=0;
        int oi=0;

        int[] dp=new int[n];


        for(int i=0;i<n;i++)
        {

            int mx=0;
            for(int j=0;j<i;j++)
            {
                if(arr[i]>arr[j]){
                    mx=Math.max(mx,dp[j]);
                }
            }
            dp[i]=1+mx;

            if(dp[i]>ovmax)
            {
                ovmax=dp[i];
                oi=i;
            }
        }

        System.out.println(ovmax);


        ArrayDeque<Pair>queue=new ArrayDeque<>();

        queue.add(new Pair(oi,ovmax,arr[oi],arr[oi]+""));


        while(!queue.isEmpty()){

            Pair fr= queue.remove();


            if(fr.l==1){
                System.out.println(fr.psf);
            }

            for(int j=0;j<fr.i;j++)
            {
                if(arr[j]<fr.val&&dp[j]==fr.l-1){
                 queue.add(new Pair(j,dp[j],arr[j],arr[j]+" "+fr.psf));
                }
            }

        }

    }

}
