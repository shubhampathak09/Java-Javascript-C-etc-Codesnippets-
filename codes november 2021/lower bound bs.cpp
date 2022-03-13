#include<bits/stdc++.h>
using namespace std;




int main(){


vector<int>arr={0,1,1,2,3,3,3,3,4,5,5,5,10};

int n=arr.size();


int s=0;
int e=n-1;

int key=2;

// cin>>key;

int ans=-1;

while(s<=e){
	
	
	
	int mid=s+(e-s)/2;
	
	if(arr[mid]==key){
		ans=mid;
		e=mid-1;
	}
	else if(arr[mid]>key){
		e=mid-1;
	}else
	{
		s=mid+1;
	}
}	

cout<<"lower index of element "<<key<<" is..."<<ans<<endl;	





	
}
