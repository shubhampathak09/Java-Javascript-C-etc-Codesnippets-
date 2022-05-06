// top k frequent elements

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int k=2;
	
	int a[]={1,1,1,3,2,2,4};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
	
	map<int,int>mp;
	
	for(int i=0;i<n;i++){
		mp[a[i]]++;
	}
	
	
	for(auto x =mp.begin();x!=mp.end();x++){
		
		pq.push({x->second,x->first});
		
		if(pq.size()>k){
			pq.pop();
					}
	}
	
	while(pq.size()>0){
		
		cout<<pq.top().second<<endl;
		pq.pop();
	}
	
}
