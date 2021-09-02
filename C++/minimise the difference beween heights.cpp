// minimise the differnece between the heights

#include<bits/stdc++.h>
using namespace std;

int getminDiff(int arr[],int n,int k)
{
	
	
	sort(arr,arr+n);
	
	int ans=arr[n-1]-arr[0];
	
	
	int smallest=arr[0]+k;
	int largest=arr[n-1]-k;
	
	int mn,ma;
	for(int i=0;i<n-1;i++)
	{
		
		 mn=min(smallest,arr[i+1]-k);
		 ma=max(largest,arr[i]+k);
		
		if(mn<0)
		continue;
		
		ans=min(ans,ma-mn);
		
	}
	
	return ans;
	
}
int main()
{
	
	
	int a[]={1, 5, 15,10};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	cout<<getminDiff(a,n,3);
	
}
