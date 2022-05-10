class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     
        
        int n=nums.size();
        map<vector<int>,int>mp;
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<=n-3;i++){
        
            int k=i+1;
            int j=n-1;
            
            while(k<j){
                
                if(nums[i]+nums[k]+nums[j]==0){
                    
                    
                    vector<int>ans;
                    ans.push_back(nums[i]);
                    ans.push_back(nums[j]);
                    ans.push_back(nums[k]);
                    if(mp.find(ans)==mp.end()){
                        mp[ans]=1;
                       // cout<<ans[0]<<ans[1]<<ans[2];
                        res.push_back(ans);
                    }
                    k++;
                    j--;
                }else if(nums[i]+nums[k]+nums[j]<0){
                    k++;
                }else
                    j--;
                
            }
            
        }
        
        return res;
    }
};
