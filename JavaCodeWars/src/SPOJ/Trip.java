package SPOJ;

public class Trip {


    /* #SPOJ   Classical  Problem TRIP
    Alice and Bob want to go on holiday. Each of them has drawn up a list of cities to be visited in turn.
    A list may contain a city more than once. As they want to travel together,
    they have to agree upon a common route. No one wants to change the order of the cities on his list or add other cities.
    Therefore they have no choice but to remove some cities from the list. Of course the common route is to involve as much sight-seeing in cities as possible.
    There are exactly 26 cities in the region. Therefore they are encoded on the lists as lower case letters from 'a' to 'z'.
*/
    public static int lcs(String s1,String s2){


        if(s1.length()==0||s2.length()==0)
            return 0;

        int n=s1.length();
        int m=s2.length();


        int[][] dp=new int[n+1][m+1];

        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){

                if(i==0||j==0)
                    dp[i][j]=0;
                else if(s1.charAt(i-1)==s2.charAt(j-1)){
                    dp[i][j]=1+dp[i-1][j-1];
                }else
                {
                    dp[i][j]=Math.max(dp[i-1][j],dp[i][j-1]);
                }

            }
        }
        return dp[n][m];
    }

    public static void main(String[] args){

        String s1="abcabcaa";

        String s2="acbacba";

        System.out.println(lcs(s1,s2));

    }


}
