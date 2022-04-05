class Solution {
public:
    
    vector<vector<int>>g;
    
    
    void dfs(int source,vector<int>visited,int &count){
        
        
        visited[source]=1;
        count++;
        for(auto x:g[source]){
            
            if(visited[x]==0)
            {
                dfs(x,visited,count);
            }
            
        }
        
        
    }
    
    int processBombs(vector<vector<int>>&bombs){
        
        
        g.resize(bombs.size());
        
        
        for(int i=0;i<bombs.size();i++){
            
            
            for(int j=i+1;j<bombs.size();j++){
                
                
                int x1=bombs[i][0];
                int y1=bombs[i][1];
                int x2=bombs[j][0];
                int y2=bombs[j][1];
                
                
                int dist = floor(sqrt(abs(x2-x1)*abs(x2-x1) + abs(y2-y1)*abs(y2-y1)));
                
                int explosionRadius=bombs[i][2];
                
                if(dist<=explosionRadius){
                    g[i].push_back(j);
                }
                
            }
            
        }
        
        
        int n=bombs.size();
        
        int mxcount=0;
        
        
        for(int i=0;i<n;i++){
            
            vector<int>visited(n);
            
            int count=0;
            
            dfs(i,visited,count);
            
            mxcount=max(count,mxcount);
            
            
        }
        
        return mxcount;
        
    }
    
    
    int maximumDetonation(vector<vector<int>>& bombs) {
        
        
        int ans=processBombs(bombs);
            
            return ans;
        
    }
};


// to fix this code

