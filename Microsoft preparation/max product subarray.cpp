#include<bits/stdc++.h>
using namespace std;

int main(){
	
	
	int a[]={6,-3,-10,0,2};
	
	int n=sizeof(a)/sizeof(a[0]);


     int ans=INT_MIN;	
	int crp=1;
	for(int i=0;i<n;i++){
		
		crp=crp*a[i];
		ans=max(ans,crp);
		if(crp==0){
			crp=1;
		}
}
      
      crp=1;
		
		for(int i=n-1;i>=0;i--){
			
		crp=crp*a[i];
		ans=max(ans,crp);
		if(crp==0){
			crp=1;
		}
		}
		
		cout<<ans;
}
