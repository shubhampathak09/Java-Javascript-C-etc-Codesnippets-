package DP;

import java.util.Arrays;
import java.util.Scanner;

public class MaxNonOverLappinfridges {


    public static class Bridge implements Comparable<Bridge>{
        int n;
        int s;
        Bridge(int n,int s)
        {
            this.n=n;
            this.s=s;
        }

        public int compareTo(Bridge b)
        {
            if(this.n!=b.n)
            return this.n-b.n;
            else
                return this.s-b.n;
        }


        public static void main(String[] args)
        {

            Scanner scn=new Scanner(System.in);

            int n=Integer.parseInt(scn.nextLine());

            Bridge[] bd=new Bridge[n];


            for(int i=0;i<n;i++)
            {
                String line=scn.nextLine();

                String[]parts=line.split(" ");
                int north=Integer.parseInt(parts[0]);
                int south=Integer.parseInt(parts[1]);

                bd[i]=new Bridge(north,south);

            }

            Arrays.sort(bd);


            int[] dp=new int[n];

            int omax=0;

            for(int i=0;i<n;i++){
                int mx=0;
                for(int j=0;j<i;j++)
                {
                    if(bd[j].s<=bd[i].s){   // if south bank is same will it be overlapping ? considering it as non overlapping in this case
                        mx=Math.max(mx,dp[j]);
                    }
                }
                dp[i]=1+mx;

                if(dp[i]>omax)
                {
                    omax=dp[i];
                }
            }


            System.out.println(omax);
        }

    }

}
