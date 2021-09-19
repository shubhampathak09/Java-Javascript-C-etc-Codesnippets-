#include<bits/stdc++.h>
using namespace std;


int findmin(int a[],int n){
	
	
	int low=0;
	
	int high=n-1;
	
	
	if(a[low]<=a[high]){
		
		return low;  // sorted array
		
	}
	
	
	while(low<=high){
		
		
		int mid=(low+high)/2;
		
		int next=(mid+1)%n;
		int prev=(mid+(n-1))%n;
		
		
		if(a[mid]<=a[prev]&&a[mid]<=a[next]){
			
			return mid;
		}
		else if(a[mid]<=a[high]){
		   // mid to n-1 sorted
		   
		   
		   high=mid-1;
		   
	}
	else if(a[mid]>=a[low]){
		low=mid+1;
	}
}

return -1;
}
int main()
{
	
	//cout<<"hellow trying keyborad";
	
	//cout<<endl;
int nums[]={4,5,6,7,0,1,4};


int n=sizeof(nums)/sizeof(nums[0]);	
	
int ans=findmin(nums,n);	
	
if(ans!=-1)
cout<<"Number of times the array is rotated is.. "<<ans<<endl;
else
{
	cout<<"orignal array incorect or unosorted.."<<endl;
}


cout<<nums[ans];	
	//return 0;
	
	
}
