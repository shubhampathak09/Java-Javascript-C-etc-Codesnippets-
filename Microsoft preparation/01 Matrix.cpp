// The Maze 2 return the shortest distane returned

class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        int n=mat.size();
        int m=mat[0].size();
        
           queue<pair<int,int>>q;
        
        vector<vector<int>>ans(n,vector<int>(m,INT_MAX));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0)
                {
                    ans[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        
        int dx[]={1,0,-1,0};
        int dy[]={0,1,0,-1};
        
        
        while(!q.empty()){
            
            pair<int,int>curr=q.front();
            q.pop();
            
            int x=curr.first;
            int y=curr.second;
            
           // int i=x;
            for(int i=0;i<4;i++){
                 
                int newx=x+dx[i];
                int newy=y+dy[i];
                
                if(newx>=0 && newx <n && newy>=0 && newy<m && ans[newx][newy]==INT_MAX)
                {
                    ans[newx][newy]=ans[x][y]+1;
                    q.push({newx,newy});
                }
            }
            
            
        }
     
        return ans;
        
    }
};

