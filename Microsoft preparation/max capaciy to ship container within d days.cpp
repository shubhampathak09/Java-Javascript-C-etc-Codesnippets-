class Solution {
public:
    
    bool ispossible(vector<int>&weights,int mid,int days,int n){
        
        int sum=0;
        int ds=1;
        
        for(int i=0;i<n;i++){
            sum+=weights[i];
            if(sum>mid){
                sum=weights[i];
                ds++;
            }
        }
        
        if(ds>days)
            return false;
        else return true;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
     
        int maxi=INT_MIN;
        int sum=0;
        
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
            maxi=max(maxi,weights[i]);
        }
        
        int s=maxi;
        int e=sum;
        
        int n=weights.size();
        int ans=0;
        while(s<=e){
            
            int mid=s+(e-s)/2;
            
            if(ispossible(weights,mid,days,n))
            {
                ans=mid;
                e=mid-1;
            }else
            {
                s=mid+1;
            }
        }
        return ans;
    }
};
