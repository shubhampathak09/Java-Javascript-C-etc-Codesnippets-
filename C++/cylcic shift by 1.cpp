// cylically rotate an array by 1

// 3 4 5 6 1 2

//2 3 4 5 6 1


#include<bits/stdc++.h>
using namespace std;


int main(){
	
	
	int a[]={3,4,5,6,1,2};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int last=a[n-1];
	
	for(int i=n-1;i>=1;i--){
		
		a[i]=a[i-1];
		
	}
	a[0]=last;
	
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
}
