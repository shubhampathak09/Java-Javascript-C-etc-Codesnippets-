#include<bits/stdc++.h>
using namespace std;


vector<vector<int>>g(10001);

vector<int>visited(10001);


void solve(int src,int par,vector<int>&ans){
	
	int sz=0;
	
	for(auto child:g[src]){
		
		if(child!=par){
			
			solve(child,src,ans)
			sz+=ans[child]
		}
		sz+=1;
		ans[src]=sz
	}
	
	
}
 
 
// test code here 

int main()
{
	
	//TO do
	
	
}
