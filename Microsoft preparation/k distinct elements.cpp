#include<bits/stdc++.h>
using namespace std;

// longest substring containing excatly k distinct characters



int main(){
	
	
	
	int a[]={6,5,1,2,3,2,1,4,5};
	 
	 
	 map<int,int>mp;
	 
	 
	 int n=sizeof(a)/sizeof(a[0]);
	 
	 int i=0;
	 int j=0;
	 
	 int maxlen=0;
	 int k=3;
	 while(j<n){
	 	
	 	
	 	mp[a[j]]++;
	    
			
	 	while(mp.size()>k){
	 		
	 		mp[a[i]]--;
	 		if(mp[a[i]]==0){
	 			mp.erase(a[i]);
			 }
	 		 i++;
		 }
	    	
	 	 maxlen=max(maxlen,j-i+1);
	 	 j++;
	 }
	 
	 cout<<maxlen;
}
