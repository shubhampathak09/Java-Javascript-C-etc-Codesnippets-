// find me

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	int k;
	
	cin>>n>>k;
	
	int arr[n];
	
	int flag=-1;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]==k){
			flag=1;
		}
	}
	
	cout<<flag;
}
