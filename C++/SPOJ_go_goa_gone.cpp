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
	
	maxmoney=max(maxmoney,max(sum1,sum2));
}


// need backtrackong


// correct ans  is 30 , here the ans is 22.. need to review
int main()
{
	
	
	for(int i=1;i<=8;i++)
	{
		cin>>money[i];
	}
	
	
	int n;
	
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		int a,b;
		cin>>a>>b;
		mp[1].push_back(2);
		mp[2].push_back(1);
	}
	
	generate(1,0);
	
	
	cout<<"Max money is.."<<maxmoney;
}


//try bitmask instead of recursion

/*
3 14 5 2 3 4 1 9
4
1 2
2 3
4 5
7 8
*/
