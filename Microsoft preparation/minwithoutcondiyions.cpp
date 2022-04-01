
#include<bitss/stdc++.h>
using namespace  std;


int  findmin(int a[],int n){
	
	
	if(n==0)
	return a[n];
	
	int minx=findmi(a,n-1);
	// ? golgappa
	
	
}

int main(){
	
	
	int a[]={1,4,5,6};
	
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	int ans=findmin(a,n-1);
	
	cout<<ans;
}
