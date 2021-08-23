// randomised binary search

#include<bits/stdc++.h>
#include<ctime>
using namespace  std;


int getRandom(int x,int y)
{
	srand(time(NULL));
	return (x+(rand()%(y-x+1)));
}


int randmizeBinarySearch(int arr[],int l,int r,int k)
{
	int step=0;
	
	while(l<=r)
	{
		
		int mid=getRandom(l,r);
		if(arr[mid]==k)
		{   step++;
		cout<<"Found in.."<<step<<endl;
			return mid;
		}else if(arr[mid]<k)
		{
			step++;
			l=mid+1;
		}else
		{
			step++;
			r=mid-1;
		}
	}
	return -1;
	
}

int main()
{
	
	int arr[]={2,3,4,10,40};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	int x=10;
	
	cout<<randmizeBinarySearch(arr,0,n-1,x);
	
}
