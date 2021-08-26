package DP;

import java.util.Arrays;
import java.util.Scanner;

public class RussianDollEnvelops {


    public static class Envelops implements  Comparable<Envelops>
    {

        int h;
        int w;

        Envelops(int h,int w)
        {
            this.h=h;
            this.w=w;

        }

        @Override
        public int compareTo(Envelops o) {
            return this.h-o.w;
        }
    }




    public static void main(String[] args)
    {

        Scanner scn=new Scanner(System.in);

        int n=Integer.parseInt(scn.nextLine());

        Envelops[] envelops=new Envelops[n];

        for(int i=0;i<n;i++)
        {
            String line= scn.nextLine();
            String[] parts=line.split(" ");
            int h=Integer.parseInt(parts[0]);
            int w=Integer.parseInt(parts[1]);
             envelops[i]=new Envelops(h,w);
        }

        Arrays.sort(envelops);

        int ovmax=0;

        int[] dp=new int[envelops.length];


        for(int i=0;i<n;i++)
        {
            int mx=0;

            for(int j=0;j<i;j++)
            {
                if(envelops[j].w<envelops[i].w){
                    mx=Math.max(mx,dp[j]);
                }
            }
            dp[i]=1+mx;
            if(ovmax<dp[i])
            {
                ovmax=dp[i];
            }
        }

        System.out.println("Max Envelops that can be stacked "+ovmax);

    }

}
