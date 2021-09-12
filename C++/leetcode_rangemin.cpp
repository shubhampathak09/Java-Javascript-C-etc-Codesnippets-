// adobe range -query-2

#include<bits/stdc++.h>
using namespace  std;

int solve(int a[],int n,int k){
	
	
	sort(a,a+n);
	
	int largest=a[n-1]-k;
	int smallest=a[0]+k;
	
	int ans=a[n-1]-a[0];
	
	for(int i=0;i<n-1;i++)
	{
		 int mi=min(a[i+1]-k,smallest);
		 int mx=max(a[i]+k,largest);
		 
		 if(mi<0)
		 continue;
		 
		 ans=min(ans,mx-mi);
	}
	return ans;
	
}
int main()
{
	
	int arr[]={1,3,4};
	
	int n=3;
	
	int k=3;
	
	cout<<solve(arr,n,k);
	
}
