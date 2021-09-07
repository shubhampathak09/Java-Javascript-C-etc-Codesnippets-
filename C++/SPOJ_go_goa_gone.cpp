//
#include<bits/stdc++.h>
using namespace std;

map<int,vector<int>>mp;

vector<int>money(9);


int maxmoney=0;


void generate(int ci,int sum){
	
	if(ci==9){
		cout<<maxmoney<<endl;
		return;
	}
int 	sum1=sum+money[ci];
int 	sum2=money[ci];
	int next=ci+1;
	for(auto x:mp[ci]){
		if(x!=ci+1)
		generate(next,sum1);
	}
	generate(next,sum2);
	
	maxmoney=max(sum1,sum2);
}

int main()
{
	
	
	for(int i=1;i<=8;i++)
	{
		cin>>money[i];
	}
	
	
	int n=4;
	
	for(int i=1;i<=n;i++)
	{
		int a,b;
		cin>>a>>b;
		mp[1].push_back(2);
		mp[2].push_back(1);
	}
	
	
}
