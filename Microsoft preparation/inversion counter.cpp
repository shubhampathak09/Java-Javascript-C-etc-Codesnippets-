// inversion counter
#include<bits/stdc++.h>
using namespace std;


int main(){
	
	
	int inv_count=0;
	
	int arr[]={1,20,6,4,5};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			
			if(arr[j]<arr[i]){
				inv_count++;
			}
		}
	}
	cout<<inv_count;
	
	
	//o(n^2) apprach
	
}
