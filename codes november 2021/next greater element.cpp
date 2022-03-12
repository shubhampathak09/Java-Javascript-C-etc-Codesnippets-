// next greater element

#include<bits/stdc++.h>
using namespace std;


int main(){
	
	
	
	int arr[] ={4,5,2,25};
	
	
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	
	// store index
	
	
	int ngei[n];

    stack<int>st;
	
	ngei[n-1]=-1;	
	
	st.push(n-1);
	for(int i=n-2;i>=0;i--){
		
		
		while(!st.empty()&&arr[st.top()]<arr[i]){
			
			st.pop();
			
		}
		
		if(st.empty()){
			ngei[i]=-1;
		}
		else
		{
			ngei[i]=st.top();
		}
		
		st.push(i);
	}
	
	cout<<"Printing the indexes.."<<endl;
	
	for(int i=0;i<n;i++){
		cout<<ngei[i]<<endl;
	}
	
	// test yourself :p 
}
