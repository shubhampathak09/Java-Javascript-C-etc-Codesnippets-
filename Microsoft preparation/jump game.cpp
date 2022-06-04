// jump game
#include<bits/stdc++.h>
using namespace  std;


// 3 3 0 2 1 2 4 2 0 0
                     

// store 

bool canreach(vector<int>&nums){
	
	int n=nums.size();
	
	for(int i=n-1;i>=0;i--){
		
		if(nums[i]+i>=n)
		n=i;
		
	}
	return n==0;
}

int main(){
	
	
	
//	int arr[]={3,3,0,2,1,2,4,2,0,0};
	
	int arr[]={3,2,1,0,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	
	int dp[n];
	
 dp[n-1]=0;
	
	
	for(int i=n-2;i>=0;i--){
		int steps=arr[i];
		int min=INT_MAX;
		
		for(int j=1;j<=steps&& i+j<n;j++){
	        
			if(dp[i+j]!=INT_MAX && dp[i+j]<min )
					min=dp[i+j];
		}
		
		if(min!=INT_MAX)
	    dp[i]=min+1;
	    else
	    dp[i]=min;
	}
	
	if(dp[0]!=INT_MAX)
	cout<<dp[0];
	else
	cout<<"Not  possible";
	
	
	cout<<endl;
	string s="I am smart fuck goldman";
	
	
	for(int i=0;i<s.length();i++){
		if(s[i]==' ')
		cout<<" this  is space"<<endl;
	}
}
