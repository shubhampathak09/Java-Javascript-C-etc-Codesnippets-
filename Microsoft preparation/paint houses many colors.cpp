class Solution {
public:
    int minCostII(vector<vector<int>>& costs) {
        
        
        int n=costs.size();
        int m= costs[0].size();
        
        
        int dp[n][m];
        
        int minval=INT_MAX;
        int secmin=INT_MAX;
        for(int i=0;i<m;i++){
            dp[0][i]=costs[0][i];
            if(costs[0][i]<=minval){
                
                secmin=minval;
                minval=costs[0][i];
                
            }
            else if(costs[0][i]<=secmin)
                secmin=costs[0][i];
        }
         
        
       for(int i=1;i<n;i++){
           int newmin=INT_MAX;
           int newsecmin=INT_MAX;
           
           for(int j=0;j<m;j++){
               
               if(dp[i-1][j]==minval){
                   dp[i][j]=secmin+costs[i][j];
               }else{
                   dp[i][j]=minval+costs[i][j];
               }
               if(dp[i][j]<=newmin){
                   newsecmin=newmin;
                   newmin=dp[i][j];
               }else if(dp[i][j]<=newsecmin){
                   newsecmin=dp[i][j];
               }      
               
           }
           minval=newmin;
           secmin=newsecmin;
       } 
        
        return minval;
    }
};
