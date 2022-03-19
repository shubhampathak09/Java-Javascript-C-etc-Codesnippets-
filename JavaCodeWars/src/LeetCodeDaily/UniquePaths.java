package LeetCodeDaily;

public class UniquePaths {

    /*
    There is a robot on an m x n grid. The robot is initially located at the top-left corner (i.e., grid[0][0]).\
    The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). The robot can only move either down or right at any point in time.
    Given the two integers m and n, return the number of possible unique paths that the robot can take to
    reach the bottom-right corner.

    The test cases are generated so that the answer will be less than or equal to 2 * 109.
    */

    public static int uniquePaths(int m,int n){


        int[][] dp=new int[m][n];

        dp[m-1][n-1]=1;


        for(int i=0;i<n-1;i++){

            dp[m-1][i]=1;

        }

        for(int j=0;j<m-1;j++){
            dp[j][n-1]=1;
        }

        for(int i=m-2;i>=0;i--){
            for(int j=n-2;j>=0;j--){

                dp[i][j]=dp[i+1][j]+dp[i][j+1];

            }
        }
        return dp[0][0];
    }

    public static void main(String[] args){


        System.out.println(uniquePaths(3,7));

    }
}
