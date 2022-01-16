#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	long long n;
	
	cin>>n;
	
	
	string s;
	
	while(n>0){
		
		s+='0'+(n%2)*2;
		n=n/2;
		
	}
	
	reverse(s.begin(),s.end());
	
	cout<<s;
	
	
}
