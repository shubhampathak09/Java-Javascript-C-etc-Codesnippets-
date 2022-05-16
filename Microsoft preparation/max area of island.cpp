class Solution {
public:
    
    int dx[4]={1,0,-1,0};
    int dy[4]={0,1,0,-1};
    
    void dfs(vector<vector<int>>&grid,int x,int y,int n,int m,int &count){
        
        grid[x][y]=0;
        
        for(int i=0;i<4;i++){
            
            int newx=x+dx[i];
            int newy=y+dy[i];
            
            if(newx>=0 && newx<n&&newy>=0&& newy<m && grid[newx][newy]==1){
                count=count+1;
                dfs(grid,newx,newy,n,m,count);
            }
            
        }
        
    } 
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int maxA=0;
        
     int n=grid.size();
        int m=grid[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1)
                {
                    int count =1;
                    dfs(grid,i,j,n,m,count);
                    maxA=max(maxA,count);
                }
            }
        }
        
        return maxA;
    }
};
