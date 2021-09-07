// last occurence

#include<bits/stdc++.h>
using namespace std;




int main()
{

	int a[]={2,4,10,10,10,20};	
	
	
	int n=sizeof(a)/sizeof(a[0]);
	
 //vector<vector<int>>v;
	
	int low=0;
	int high=n-1;
	
	int target=10;
	
	int ans=-1;
	
	while(low<=high){
		
		
		int mid=low+(high-low)/2;
		
		
		if(a[mid]==target)
		{
			ans=mid;
			low=mid+1;
		}else if(a[mid]<target){
			low=mid+1;
		}else
		{
			high=mid-1;
		}
	}
	
	cout<<"Last index is.."<<ans
;}
