#include<bits/stdc++.h>
using namespace std;


int main(){
	
	
	vector<int>nums={1,2,3};
	
	int n=nums.size();
	
	if(n==1)
	return 1;
	
	int lastInc=-1;
	int i=1;
	
	while(i<n){
		if(nums[i]>nums[i-1])
		lastInc=i;
		i=i+1;
	}
	
	// check the array is  descending order
	if(lastInc==-1){
		for(int i=0;i<n/2;i++){
			swap(nums[i],nums[n-i-1]);
			
		}
		return 0;
	}
	
	int index=lastInc;
	
	for(int i=lastInc;i<n;i++){
		if(nums[i]>nums[lastInc-1]&&nums[i]<nums[index])
		index=i;
	}
//	[1.2.3.4.5.2]
	swap(nums[lastInc-1],nums[index]);
	sort(nums.begin()+lastInc,nums.end());
	
	for(auto x:nums){
		cout<<x<<" ";
	}
	
}



class Solution {
public:
    double myPow(double x, int n) {
        
        double ans=1.0;
        
        long nn=n;
        if(nn<0)
            nn=-1*nn;
        while(nn>0){
            if(nn%2==0){
                x=x*x;
                nn=nn/2;
            }else
            {
                ans=ans*x;
                nn=nn-1;
            }
        }
        
        if(n<0) ans=(double)(1.0 ) / (double)ans;
        
        return ans;
    }
};
