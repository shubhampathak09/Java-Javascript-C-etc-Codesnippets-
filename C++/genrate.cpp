// generate permutation

#include<bits/stdc++.h>
using namespace std;


vector<vector<int>>res;


void generate(vector<int>a,int i,int n,vector<int>ans)
{
	
	if(i==n){
		
		res.push_back(ans);
		return;
	}
	
	// include i th element in ans
	
//	vector<int>ans1=ans;
//	vector<int>ans2=ans;
//	ans2.push_back(a[i]);
	generate(a,i+1,n,ans);
	ans.push_back(a[i]);
	generate(a,i+1,n,ans);
}
int main()
{
	
	vector<int>a={1,2,3};
	
	int n=a.size();
	
	vector<int>ans;
	
	
generate(a,0,n,ans);

for(int i=0;i<res.size();i++)
{
	
	for(auto x:res[i]){
		cout<<x<<" ";
	}
	cout<<endl;
	}	
	
}
