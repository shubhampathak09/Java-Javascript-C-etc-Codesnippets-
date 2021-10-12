// Module 1e9+7

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	
	int n=21;
	
	
	int fact=1;
	
	for(int i=2;i<=n;i++)
	{
		
		fact=(fact*i) % 47;
	}
	
	cout<<fact<<endl;
	
	
}
