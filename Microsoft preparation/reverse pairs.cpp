#include<bits/stdc++.h>
using namespace std;

int main(){
	
	
	
	// brute force wont work for very large inputs -----
	int count=0;
	
	vector<int>nums={2,4,3,5,1};
	
	int n=nums.size();
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			
			if(i>=0&&j>i &&i<n&&j<n){
				if(nums[i]>2*nums[j]){
					count++;
				}
			}
		}
	}
	
	cout<<count;
}
