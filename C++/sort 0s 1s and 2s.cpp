// sort 0s 1s and 2s

#include<bits/stdc++.h>
using namespace std;

int main(){
	
//	cout<<"hello";
	
	int arr[]={0,1,1,2,0,0,2,1,0,2,2,1,1,0,0,1,2,1};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	
	int low=0;
	
	int mid=0;
	
	int high=n-1;
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	while(mid<=high)
	{
		
		switch(arr[mid]){
			
			
			case 0: 
			swap(arr[mid++],arr[low++]);
			break;
			
			case 1:
			mid++;
			break;	
				
			case 2:
			swap(arr[mid],arr[high--]);
		 	break;	
		}
		
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
}
