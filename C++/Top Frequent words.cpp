// top k frequent words

#include<bits/stdc++.h>
using namespace std;


//["i","love","leetcode","i","love","coding"],

int main(){
	
	
	vector<string>v={"i","love","leetcode","i","love","coding"};
	
	
	map<string,int>mp;
	
	for(auto x:v){
		
		mp[x]++;
		
	}
	
	
	
	int n=v.size();
	
	
	 priority_queue<pair<int,string>,vector<pair<int,string>>>pq;
	 
	
	for(auto x:mp){
		
		pq.push({x.second,x.first});
	}
	
//	while(!pq.empty()){
//		
//		cout<<pq.top().second<<" "<<pq.top().first;
//		
//		pq.pop();
//		
//		cout<<endl;
//	}
	
	int k=2;
	
	int cnt=0;
	
	while(cnt<k){
			cout<<pq.top().second<<" "<<pq.top().first;
			
			cnt++;
			
			pq.pop();
			
			cout<<endl;
	}
}
