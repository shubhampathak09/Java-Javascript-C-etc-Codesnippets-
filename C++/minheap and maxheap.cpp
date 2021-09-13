// max heap and min heap

#include<bits/stdc++.h>
using namespace  std;


int main(){
	
	priority_queue<int,vector<int>>pq;  // maxheap
	
	
	priority_queue<int,vector<int>,greater<int>>pq1;
	
	
	int arr[]={3,4,5,6,7,8,9};
	
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	
	for(int i=0;i<n;i++){
	
	pq.push(arr[i]);		
	}
	
	while(!pq.empty()){
		
		cout<<pq.top()<<" ";
		pq.pop();
		
	}
	
	for(int i=0;i<n;i++){
		pq1.push(arr[i]);
	}
	
	cout<<endl;
	
	while(!pq1.empty()){
		
		cout<<pq1.top()<<" ";
		
		pq1.pop();
	}
	
}
