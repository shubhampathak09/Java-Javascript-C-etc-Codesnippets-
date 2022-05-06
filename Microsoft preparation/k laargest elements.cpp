// [3,2,1,5,6,4], k = 2

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int a[]={3,2,1,5,6,4};
	
	int k=2;
	
	// make min heap
	
	int n=sizeof(a)/sizeof(a[0]);
	
	priority_queue<int,vector<int>,greater<int>>pq;
	
	for(int i=0;i<n;i++){
		
		pq.push(a[i]);
		
		if(pq.size()>k){
			pq.pop();
		}
	}
	
	cout<<pq.top();
	
	return 0;
	
//	while(pq.size()>0){
//		
//		cout<<pq.top()<<" ";
//		pq.pop();
//	}
	return 0;
}
