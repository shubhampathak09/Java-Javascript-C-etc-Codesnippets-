package DpLevel1;

import java.util.Scanner;

public class CountPaths {


    public static void main(String[] args) {


        Scanner scn = new Scanner(System.in);

        int n = scn.nextInt();

        int[] dp=new int[n+1];   // memoising the ans

        int cp = countPaths(n,dp);



        System.out.println(cp);



    }

    public static int countPaths(int n,int[] dp){


        if(n==0){
            return 1;
        }

        if(n<0){
            return 0;
        }

        if(dp[n]!=0)
            return dp[n];

        int nm1=countPaths(n-1,dp);

        int nm2=countPaths(n-2,dp);

        int nm3=countPaths(n-3,dp);


        int ans=nm1+nm2+nm3;

        return dp[n]=ans;

    }



}
