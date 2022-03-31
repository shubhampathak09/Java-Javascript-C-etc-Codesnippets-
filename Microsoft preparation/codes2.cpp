#include<bits/stdc++.h>
using namespace  std;

int main(){
	
	int arr[]={-3,2,1,-5,-6,2,-9,0};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	int i=0;
	
	int j=n-1;
	
	
	while(i<=j){
		
		if(a[i]<0&&a[j]<0){
			i++;
		}else if(a[i]<0&&a[j]>0){
			i++;
			j--;
		}else if(a[i]>0&&a[j]<0){
			swap(a[i],a[j]){
				j--;
			}else
			{
				j--;
			}  ///todo
		}
		
	}
	
	
}
