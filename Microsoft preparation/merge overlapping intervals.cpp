/*
1,3
2,6
8,10
15,18
*/
#include<bits/stdc++.h>
using namespace std;

bool comp(vector<int>nums1,vector<int>nums2){
	
	return nums1[0]<=nums2[0];
	
}



int main(){
	
vector<vector<int>>nums={{1,3},{2,6},{8,10},{15,18}};


sort(nums.begin(),nums.end(),comp);
	
	
}
