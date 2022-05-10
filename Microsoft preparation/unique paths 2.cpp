
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        
      int r=obstacleGrid.size();
      int c=obstacleGrid[0].size();
        
      vector<vector<int>>path(r,vector<int>(c,0));
        
        if(obstacleGrid[0][0]==1)
            return 0;
        
        if(obstacleGrid[0][0]!=1)
        path[0][0]=1;
        
        
        for(int i=1;i<r;i++)
            if(obstacleGrid[i][0]!=1)
            path[i][0]=path[i-1][0];
        
        for(int i=1;i<c;i++)
            if(obstacleGrid[0][i]!=1)
            path[0][i]=path[0][i-1];
        
        for(int i=1;i<r;i++){
            for(int j=1;j<c;j++){
                
                
                if(obstacleGrid[i][j]!=1)
                {
                    path[i][j]=path[i][j-1]+path[i-1][j];
                }
                
            }
        }
        
        return path[r-1][c-1];
    }
};
