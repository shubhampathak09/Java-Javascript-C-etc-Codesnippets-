// merge two sorted arrays in o(1)

#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	int ar1[]={3,4,7,9,12,15,80};
	
	
	int n=sizeof(ar1)/sizeof(ar1[0]);
	
	int ar2[]={1,15,40,43,45,47,63};
	
	int m=sizeof(ar2)/sizeof(ar2[0]);
	
	
	
	int i=0;
	int j=0;
	int k=n-1;
	
	while(i<=k&&j<m)
	{
		
		if(ar1[i]<ar2[j])
		{
			i++;
		}else
		{
			 swap(ar2[j++],ar1[k--]);
			
		}
		
	}
	sort(ar1,ar1+n);
	
	sort(ar2,ar2+m);
	
	
	for(int ii=0;ii<n;ii++)
	{
		cout<<ar1[i]<<" ";
	}
	for(int jj=0;jj<m;jj++)
	{
		cout<<ar2[jj]<<" ";
	}
	
	
	// incorrect code
}
