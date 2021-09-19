// recursive approach

// find min in rotated sorted array

#include<bits/stdc++.h>
using namespace std;


int search(int a[],int l,int r){
	
	
	if(l==r)
	{
		return a[l];
	}
	
	int mid=l+(r-l)/2;
	
	if(a[mid]>a[r]){
		return search(a,mid+1,r);
	}
	if(a[mid]<a[r]){
		return search(a,l,mid);
	}
	return search(a,l,r-1);
}

int main()
{
	
	int a[]={4,5,6,7,0,1,4};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	int ans=search(a,0,n-1);
	
	
	cout<<"Min is.."<<a[ans];
	
}
