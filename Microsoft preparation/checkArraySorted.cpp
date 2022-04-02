// checl if array sorted

#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>arr){
	
	if(arr.size()==1){
		return true;
	}
	
	int x=arr[arr.size()-1];
	
	arr.pop_back();
	
	
	
	if(check(arr)){
		
		if(x>=arr[arr.size()-1])
		return true;
		else
		return false;
	}
	else
	return false;
}

int main(){
	
	
	vector<int>a={2,13,8,12};
	
	int ans=check(a);
	
	
	cout<<ans;
	
	
	for(auto x:a){
		cout<<x;
	}
}
