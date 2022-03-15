//
//Reverse the array

#include<bits/stdc++.h>
using namespace std;


void reverse(){
	
	
	int a[]={1,2,3,4,5};
	
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int mid=n/2;
	
	
	// intial array
	
	cout<<"printing the intial array"<<endl;
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	cout<<endl;
	
	cout<<"after reversring.."<<endl;
	
	for(int i=0;i<=mid;i++){
		
		
		int temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
		
	}
		
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
		
}

int main()
{
	
	
	reverse();
	
}
