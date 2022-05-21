 class Solution {
public:
    vector<pair<int,int>> dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    int trapRainWater(vector<vector<int>>& mat)
    {
        int ROW = mat.size();
        int COL = mat[0].size();
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq;
        vector<vector<bool>> vis(ROW,vector<bool>(COL, 0));
        
        for(int i = 0; i < ROW; i++){
            for(int j = 0; j < COL; j++){
                if(i==0 || j==0 || i==ROW-1 || j==COL-1) {
                    pq.push({mat[i][j],{i,j}});
                    vis[i][j]=true;
                }
            }
        }
        
        int res=0;
        while(!pq.empty()){
            auto [val, coord]=pq.top(); pq.pop();
            auto [x, y] = coord;
    
            for(auto [_x, _y] : dirs){
                int nx = x + _x, ny = y + _y;
                
                if(nx < 0 || ny < 0 || nx == ROW || ny == COL || vis[nx][ny]) continue;
                vis[nx][ny] = 1;
                res += max(0, val - mat[nx][ny]);
                pq.push({max(val, mat[nx][ny]), {nx,ny}});
            }
        }
        return res;
    }
};









-----------------------------------------------------------------------




class Solution {
private:
    bool isPossible(vector<int> nums,int mid,int m){
        int limit = 1;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            
            if(sum > mid){
                limit ++;
                sum = nums[i];
            }
        }
        
        if(limit > m){
            return false;
        }
        else{
            return true;
        }
    }
public:
    int splitArray(vector<int>& nums, int m) {
        int sum =0;
        int maxi = INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            maxi = max(maxi,nums[i]);
        }
        if(m==nums.size()){
            return maxi;
        }
        
        int s = maxi;
        int e = sum;
        int ans = 0;
        
        while(s<=e){
            int mid = s + (e-s)/2;
            
            if(isPossible(nums,mid,m)){
                ans = mid;
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        
        return ans;
    }
};
0
Reply
Share
Report
Rohit_Singhal_0904's avatar
Rohit_Singhal_0904
0
Last Edit: March 31, 2022 7:43 PM

Read More
Java Solution ==>

public int splitArray(int[] nums, int m) {
int sum=0;
int max=Integer.MIN_VALUE;
for(int i:nums){
max=Math.max(max,i);
sum+=i;
}
int res=0;
int l=max,r=sum;
while(l <= r){
int mid=l+(r-l)/2;
int temp=0,ss=0;
for(int i=0;i<nums.length;i++){
ss+=nums[i];
if(ss > mid){
ss=nums[i];
temp++;
}
}
temp++;
if(temp <= m){
r=mid-1;
res=mid;
}
else l=mid+1;
}
return res;
}
