#include<bits/stdc++.h>
using namespace std;


int sqRoot(int number){
	
	int start=1;
	int end=number;
	
	int result;
	
	while(start<=end){
		
		
		int mid=(start+end)/2;
		
		if(mid*mid==number)
		return mid;
		
		else if(mid*mid<number){
			start=mid+1;
			result=mid;
		}
		else
		{
			end=mid-1;
		}
	}
	
	return result;
}

int main(){
	
	
	
	cout<<sqRoot(7);
	
}
