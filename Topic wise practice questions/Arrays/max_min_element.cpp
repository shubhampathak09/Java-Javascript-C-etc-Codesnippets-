#include<bits/stdc++.h>
using namespace std;

//vfv

int main()
{
	int a[]={100,11,445,1,330,3000};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	int mx=INT_MIN;
	int mn=INT_MAX;
	
	for(int i=0;i<n;i++){
		
		
		if(a[i]>mx)
		mx=a[i];
		
		if(a[i]<mn)
		mn=a[i];
		
	}
	
	
	cout<<"Max element in array is.."<<mx<<endl;
	
	cout<<"Min element in array is.."<<mn;
}

