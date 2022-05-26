#include<bits/stdc++.h>
using namespace std;

int findFirst(int x,vector<int>a,int n){
	
	
	int low=0;
	int high=a.size()-1;
	int ans=-1;
	while(low<=high){
		
		int mid=(low+high)/2;
		
		if(a[mid]==x){
			ans=mid;
			high=mid-1;
		}
		else if(a[mid]>x){
			high=mid-1;
		}else
		{
			low=mid+1;
		}
	}
	
	return ans;
}



int findLast(int x,vector<int>a,int n){
	
	int low=0;
	int high=a.size()-1;
	int ans=-1;
	while(low<=high){
		int mid=(low+high)/2;
		
		if(a[mid]==x){
			ans=mid;
			low=mid+1; 
		}else if(a[mid]>x){
			high=mid=1;
		}else
		{
			low=mid+1;
		}
	}
	return ans;
}
int main(){
	
	vector<int>a={3,4,5,5,8,8,8};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int x=8;
	
	cout<<findFirst(x,a,n)<<endl;

    cout<<findLast(x,a,n);
    
    
    //cout<<x;	
//	int y=findLast(x,a,n);
	
//	cout<<x<<y;
	
}
