package DP;

public class BitionicSubsequence {

    public static void main(String[] args)
    {

         int[] arr={10,22,9,33,21,50,41,60,80,3};


         int n=arr.length;

         int[] dp1=new int[n];
         int[] dp2=new int[n];


         for(int i=0;i<n;i++)
         {
             int mx=0;
             for(int j=0;j<i;j++)
             {
                 if(arr[i]>arr[j])
                 {
                     mx=Math.max(mx,dp1[j]);
                 }
             }
             dp1[i]=1+mx;
         }

         for(int i=n-1;i>=0;i--)
         {
             int mx=0;
             for(int j=n-1;j<i;j--)
             {
                 if(arr[j]<arr[i]){
                     mx=Math.max(mx,dp2[j]);
                 }
             }
             dp2[i]=1+mx;
         }

         int ovmax=0;


         for(int i=0;i<n;i++)
         {
         if(ovmax<dp1[i]+dp2[i])
         {
             ovmax=dp1[i]+dp2[i];
         }
         }

         System.out.println(ovmax);

    }

}
