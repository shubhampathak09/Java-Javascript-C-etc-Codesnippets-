package LeetCodeDaily;

public class EditDistance {

  public static int dp[][]=new int [1001][1001];

    public static int Solution(String a,String b,int n,int m){

        if(n==0){
            return m;
        }
        if(m==0)
            return n;

        if(dp[n][m]!=0)
            return dp[n][m];

        if(a.charAt(n-1)==b.charAt(m-1))
            return dp[n][m]=Solution(a,b,n-1,m-1);

        else{


            // do insert remove and intercahnge

            return dp[n][m]=1 + Math.min(Solution(a,b,n-1,m),Math.min(Solution(a,b,n,m-1),Solution(a,b,n-1,m-1)));
        }


    }

    public  static void main(String [] args){


        String word1="horse";

        String word2="ros";

        int ans= Solution(word1,word2,word1.length(),word2.length());

        System.out.println(ans);

        return;

    }

}
