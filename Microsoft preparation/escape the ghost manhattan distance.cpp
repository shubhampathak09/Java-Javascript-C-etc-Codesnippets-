class Solution {
public:
    bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target) {
     
        
        int mydist=abs(target[0])+abs(target[1]);
        
        
        for(auto x: ghosts){
            
            
            int ghostDist=abs(x[0]-target[0])+abs(x[1]-target[1]);
            
            if(mydist>=ghostDist)
                return false;
            
        }
        return true;
        
    }
};
