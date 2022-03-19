package LeetCodeDaily;

/*
 robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).

         The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).

         Now consider if some obstacles are added to the grids. How many unique paths would there be?

         An obstacle and space is marked as 1 and 0 respectively in the grid.
*/




public class UniquePaths2 {

public static int solution(int[][] obstacles) {

    int n = obstacles.length;  //rows

    int m = obstacles[0].length;  //cols

    int[][] dp = new int[n][m];

    if(obstacles[n-1][m-1]==0)
        return 0;

    dp[n - 1][m - 1] = 0;

    for (int i = 0; i <= m - 2; i++)
        dp[n - 1][i] = obstacles[n - 1][i] == 1 ? 0 : 1;

    for (int i = 0; i <= n - 2; i++)
        dp[i][m - 1] = obstacles[i][m - 1] == 1 ? 0 : 1;


    for (int i = n - 2; i >= 0; i--) {
        for (int j = m - 2; j >= 0; j--) {
            if (obstacles[i][j] == 1)
                dp[i][j] = 0;
            else
              dp[i][j] = dp[i + 1][j] + dp[i][j + 1];
        }
    }

    return dp[0][0];

}

public static void main(String[] args){

    int[][] obstaclesGrid= {{0,0,0},{0,1,0},{0,0,0}};

  //  int[][] obstaclesGrid= {{0,1},{0,0}};

    int ans=solution(obstaclesGrid);

    System.out.println(ans);

}

}
