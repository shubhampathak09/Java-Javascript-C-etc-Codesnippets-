#include<bits/stdc++.h>
using namespace std;


void solve(vector<int>a,int l,int r){
	
	if(l==r){
		
		for(int i=0;i<a.size();i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	    return; 	
	}
	
	
	
	for(int i=l;i<=r;i++){
		
		
		swap(a[l],a[i]);
		
		solve(a,l+1,r);
		
		swap(a[l],a[i]);
	}
	
	
}

int main(){
	
	
	vector<int>a={1,2,3};
	
	solve(a,0,2);
	
	
	
}
