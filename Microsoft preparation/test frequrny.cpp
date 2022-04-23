#include<bits/stdc++.h>
using namespace std;

int main(){
	
	
	vector<int>arr={0,1,1,2,3,3,3,3,4,5,5,5,10};
	
	int n=arr.size();
	
	
	cout<<upper_bound(arr.begin(),arr.end(),3) - lower_bound(arr.begin(),arr.end(),3)+1; 
	
	
}
