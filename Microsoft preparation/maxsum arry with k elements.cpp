/*
Maximum sum of K-length subarray consisting 
of same number of distinct elements as the given array
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	
	vector<int> a={7, 7, 2, 4, 2, 7, 4, 6, 6, 6}; 
	int k = 6;
	int maxsum=INT_MIN;
	
	for(int i=0;i<=a.size()-k+1;i++){
		
			
		int sum=0;
		
		set<int>st;
		
		
		for(int j=i;j<i+k;j++){
			
			sum+=a[j];
			st.insert(a[j]);
		}
		if(st.size()==k){
			maxsum=max(maxsum,sum);
		}
	}
	cout<<maxsum;
	
	return maxsum;
}
