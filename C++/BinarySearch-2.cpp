// Descending order array

#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	
	int arr[]={20,17,15,12,11,8,9,7,5,4,2,1};
	
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	int target=12;
	
	int low=0;
	
	int high=n-1;
	
	while(low<=high)
	{
		
		
		int mid=(low+high)/2;
		
		if(arr[mid]==target)
		{
			cout<<"index of the target elements is "<<mid;
			return 0;
		}else if(arr[mid]>target)
		{
		low=mid+1;	
		}else
		{
			high=mid-1;
		}
	}
	
	cout<<"no value found";
	
	return -1;
	
	
}
