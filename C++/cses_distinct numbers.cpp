#include<bits/stdc++.h>
using namespace std;


void knaive()
{
	
	
	int n;
	
	cin>>n;
	
	vector<int>a(n);
	
	map<int,int>mp;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		mp[a[i]]++;
	}
	
	cout<<"Distinct elements are.."<<mp.size();
	
}

int main()
{
	
	knaive();
	
	
}
