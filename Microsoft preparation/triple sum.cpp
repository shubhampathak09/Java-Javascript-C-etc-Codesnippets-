#include<bits/stdc++.h>
using namespace std;


int main(){
	
	
	vector<int> arr{-1,0,1,2,-1,-4};
	
	int s=0;
//	set<int>ss;
	
	sort(arr.begin(),arr.end());
	vector<vector<int>>result;
	//vector<int>result;
	int  n=arr.size();
	for(int i=0;i<=n-3;i++){
		//pick evey a[i],pair sum for remaining part
		
		int j=i+1;
		int k=n-1;
		
		// two pointer
		while(j<k){
			int curr=arr[i];
			curr=curr+arr[j];
			curr=curr+arr[k];
			
			if(curr==s){
			//	if(ss.find(arr[i])==ss.end()){
				
				result.push_back({arr[i],arr[j],arr[k]});
				
				while(j<k && arr[i]==arr[i+1])j++;
				while(j<k&& arr[k]==arr[k-1])k--;
				
				j++;
				k--;
//				ss.insert(arr[i]);
		//	}
			}else if(curr>s){
				k--;
			}else
			j++;
		}
		
		
		
	}
	
	for(int i=0;i<result.size();i++){
		for(int j=0;j<result[i].size();j++){
			cout<<result[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
