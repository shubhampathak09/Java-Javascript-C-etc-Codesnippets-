#include<bits/stdc++.h>
using namespace std;



int first(int a[],int n,int x){
	
	int low=0;
	
	int high=n-1;
	
	int ans=-1;
	
	while(low<=high)
{
	
	int mid=(low)+(high-low)/2;
	
	if(a[mid]>x){
		
		high=mid-1;
		
		
	}
	else if(a[mid]<x){
		
		low=mid+1;
		
	}
	else{
		
		ans=mid;
		high=mid-1;
	}
	}
	return  ans;	
}



int last(int a[],int n,int x){
	
	int low=0;
	
	int high=n-1;
	
	int ans=-1;
	
	while(low<=high)
{
	
	int mid=(low)+(high-low)/2;
	
	if(a[mid]>x){
		
		high=mid-1;
		
		
	}
	else if(a[mid]<x){
		
		low=mid+1;
		
	}
	else{
		
		ans=mid;
		low=mid+1;
	}
	}
	return  ans;	
}


//
//int firstocc(int a[],int x){
//	
//	int low=0;
//	int high=sizeof(a)/sizeof(a[0])-1;
//	
//	int idx=-1;
//	
//	while(low<=high){
//		
//		
//		int mid=(low+high)/2;
//		
//		if(a[mid]>x){
//			
//			high=mid-1;
//			
//		}else if(a[mid]<x){
//			
//			low=mid+1;
//			
//		}else 
//		{
//		idx=mid;
//		high=mid-1;	
//		}
//		
//	}
//	return idx;
//	
//}
//
//
//
//int lastocc(int a[],int x){
//	
//	int low=0;
//	int high=sizeof(a)/sizeof(a[0])-1;
//	
//	int idx=-1;
//	
//	while(low<=high){
//		
//		
//		int mid=(low+high)/2;
//		
//		if(a[mid]>x){
//			
//			high=mid-1;
//			
//		}else if(a[mid]<x){
//			
//			low=mid+1;
//			
//		}else if(a[mid]==x)
//		{
//		idx=mid;
//		high=mid+1;	
//		}
//		
//	}
//	
//	return idx;
//}
//

int main(){
	
	
	int a[]={1,2,2,3,3,3,4,4,5,5,5,6,6};
	
	int x=3;
	
	int n=sizeof(a)/sizeof(a[0]);
	
    int ans1=first(a,n,x);
	
	cout<<ans1<<endl;
	
	
	int ans2=last(a,n,x);
	
	cout<<ans2<<endl;
	
	
	cout<<"number of occurences of "<<x<<" "<<ans2-ans1+1;
	
}
