// generate all possobile subset

#include<bits/stdc++.h>
using namespace  std;

int main(){
	
	
	vector<int>a={1,2,5,6};
	
	int n=a.size();
	
	int mask= 1<<n;
	vector<vector<int>>res;
	for(int i=0;i<mask;i++){
		
		 int currentmask=i;
		 vector<int>cr;
		 for(int j=0;j<a.size();j++){
		 	
		 	if(currentmask & (1<<j)){
		 		cout<< a[j]<<" ";
		 		cr.push_back(a[j]);
			 }
		 }
		 res.push_back(cr);
		 cout<<endl;
	}
	
	/*
	for(auto x: res){
		
		for(int i=0;i<x.size();i++){
			cout<<x[i]<<" ";
		}
		cout<<endl;
	}
	*/
	
	
	cout<<res.size();
	
	
}
