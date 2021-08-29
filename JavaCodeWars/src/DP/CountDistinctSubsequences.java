package DP;

import java.util.HashMap;

public class CountDistinctSubsequences {


    public static void main(String[] args)
    {

        HashMap<Character,Integer>hm=new HashMap<>();


        String s="abcbac";

        int n=s.length();

        int[] dp=new int [n+1];

        dp[0]=1;


        for(int i=1;i<=n;i++)
        {
            char x=s.charAt(i-1);
            if(hm.containsKey(x)){

                int j=hm.get(x);
                dp[i]=2*dp[i-1]-dp[j-1];
                hm.put(x,i);

            }else
            {
                dp[i]=2*dp[i-1];
                hm.put(x,i);
            }

        }

        System.out.println("Total Distinct Subsequnece are.."+dp[n]);


        // Sample I/0 ->50
    }

}
