// allocate min paages

#include<bits/stdc++.h>
using namespace std;


bool isvalid(int n,int k,int a[],int mxa){
	
	
	int student=1;
	
	int sum=0;
	
	
	for(int i=0;i<n;i++){
		
	
	sum+=a[i];
	if(sum>mxa){
		student++;
		sum=a[i];
	}
	if(student>k)
	return false;	
	}
	
	return true;
	
}


int allocatePages(int a[],int n,int k){
	
	
	int total=0;
	
	for(int i=0;i<n;i++){
		
		total+=a[i];
	}
	
	//cout<<total;
	//cout<<endl;
	
	
	int low=0;
	int high=total;
	
	if(k>n)
	return -1;
	
	
	int ans=-1;
	
	
	while(low<=high){
		
		//cout<<1;
		
		int mid=(high+low)/2;
		
		if(isvalid(n,k,a,mid)==true){
			ans=mid;
			high=mid-1;
			
		}
		else
		{
			low=mid+1;
		}
	}
	
	
	return ans;
}

int main(){
	
	
	int a[]={10,20,30,40};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int k=2;
	
	cout<<allocatePages(a,n,k);
}



// Related problem
/*
Related Problems For Practice :
Book Allocation Problem (GFG)
Aggressive cow (spoj)
Prata and roti (spoj)
EKO (spoj)
Google kickstart A Q-3 202
Painter Partition Problem
1482 Minimum Number of Days to Make m Bouquets
1283 Find the Smallest Divisor Given a Threshold
1231 Divide Chocolate
1011 Capacity To Ship Packages In N Days
875 Koko Eating Bananas
Minimize 
774 Max Distance to Gas Station
410 Split Array Largest Sum
*/
