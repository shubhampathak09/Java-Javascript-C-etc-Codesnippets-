// two sum sorted list

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	
	
	int a[]={2,7,11,15};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	
	 int l=0;
	 int r=n-1;
	 
	 while(l<=r){
	 	cout<<l<<r<<endl;
	 	if(a[l]+a[r]==9){
	 		cout<<l<<" "<<r;
	 		break;
		 }
	 	else if(a[l]+a[r]>9){
	 		r--;
		 }else
		 l++;
	 }
	
}
