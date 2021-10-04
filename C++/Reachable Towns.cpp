#include<bits/stdc++.h>
using namespace std;
//
//1
int main()
{
	
	
	int n;
	
	cin>>n;
	
	map<pair<int,int>,int>mp;
	
	vector<pair<int,int>>vp;
	
	for(int i=0;i<n;i++)
	{
		
		int a,b;
		
		cin>>a>>b;
		
		mp[{a,b}]=1;
		
		vp.push_back({a,b});
		
	}
	
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j==i)
			continue;
			
			if(vp[i].first<vp[j].first&&vp[i].second<vp[j].second||vp[i].first>vp[j].first&&vp[i].second>vp[j].second){
				mp[{vp[i].first,vp[i].second}]++;
			}
		}
	}
	
	
	for(auto x:mp){
		
		cout<<x.second<<endl;
	}
}



/*
4
1 4
2 3
3 1
4 2
1
1
2
2
*/

// Tested on Single input test case , failes on second inut

// link:https://atcoder.jp/contests/acl1/tasks/acl1_a
