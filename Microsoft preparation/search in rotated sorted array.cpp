#include<bits/stdc++.h>
using namespace std;

int searchR(vector<int>a,int key){
	
	
	int low=0;
	int high=a.size();
	
	
	while(low<=high){
		
		
		int mid=(low)+(high-low)/2;
		
		if(a[mid]==key)
		return mid;
		
		else if(a[low]<=a[mid]){
			// left line
			if(key>=a[low]&&key<=a[mid]){
				high=mid-1;
			}
			else{
				low=mid+1;
			}
		}
		else{
			// right
			
			if(key>=a[mid]&&key<=a[high])
			{
				low=mid+1;
			}else
			{
				high=mid-1;
			}
			
		}
	}
	return -1;
}

int main(){
	
	
	vector<int>a={4,5,6,7,0,1,2,3};
	
	
	cout<<searchR(a,4)<<endl;
	cout<<searchR(a,0);
	
	
}
