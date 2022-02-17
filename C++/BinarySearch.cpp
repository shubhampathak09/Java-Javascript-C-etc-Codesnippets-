#include<bits/stdc++.h>
using namespace std;


// dkkvnsfld

int main()
{
	
	int ar[]={2,3,4,10,40};
	
	int low=0;
	int high=sizeof(ar)/sizeof(ar[0]);
	
    int search=10;;
	
	while(low<=high)
	{
	int mid=(low+high)/2;
	
	if(ar[mid]==search)
     {
     	cout<<mid;
     	return 0;
	 }
     
     else if(ar[mid]<search)
     {
     	low=mid+1;
	 }else
	 {
	 	high=mid-1;
	 }
			
	}
	cout<<"No such index";
	return -1;
	
}
