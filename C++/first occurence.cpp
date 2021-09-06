#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int a[]={2,4,10,10,10,20};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	int low=0;
	int high=n-1;
	
	int tar=10;
	
	int index=-1;
	
	while(low<=high)
	{
		
	//	cout<<1;
		int mid=(low+high)/2;
		
		if(a[mid]==tar){
			
			index=mid;
			// return 0;
			high=mid-1;
		}
		else if(a[mid]>tar){
			high=mid-1;
		}else
		{
			low=mid+1;
		}
	}
	
	
	cout<<index;
}
