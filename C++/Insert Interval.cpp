#include<bits/stdc++.h>
using namespace std;



bool cmp(pair<int,int>p1,pair<int,int>p2){
	
	
	if(p1.first!=p2.first){
		return p1.first<p2.first;
	}else
	{
		return p1.second<p2.second;
	}
	
}

void solve(){
	
	
	
	vector<pair<int,int>> vp={{1,3},{6,9}};
	
	pair<int,int> newinter={2,5};
	
	
	vp.push_back(newinter);
	
	
	sort(vp.begin(),vp.end(),cmp);
	
//	for(auto x:vp){
//	
//	cout<<x.first<<" "<<x.second;
//	cout<<endl;
//	}


   stack<pair<int,int>>s;
   
   s.push({vp[0]});
   
 //  1 3   2 4   first.end >=second.start
   for(int i=1;i<vp.size();i++){
   	
   	auto x=s.top();
   	
   	s.pop();
   	
   	
   	if(x.second>=vp[i].first){
   		
   		// merge
   		
   		x.second=max(x.second,vp[i].second);
   		s.push(x);
	   }
   	else
   	{
   		s.push(vp[i]);
   		s.push(x);
   	
	   }
   }

cout<<s.size();
cout<<endl;

while(!s.empty()){
	
	cout<<s.top().first<<" "<<s.top().second<<endl;
	
	s.pop();
	
}
	
}

int main()
{
	
	solve();
	
	
}
