class Solution {
public:
    
    void findcombin(int indx,int target,vector<vector<int>>&ans,vector<int>&arr,vector<int>&ds){
        
        if(indx==arr.size()){
            
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        
        if(arr[indx]<=target){
            ds.push_back(arr[indx]);
            findcombin(indx,target-arr[indx],ans,arr,ds);
            ds.pop_back();
        }
        
        findcombin(indx+1,target,ans,arr,ds);
        
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        
        findcombin(0,target,ans,candidates,ds);
        
        return ans;
    }
};
