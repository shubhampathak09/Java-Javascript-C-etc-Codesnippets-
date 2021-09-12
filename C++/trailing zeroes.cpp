// trailing zeroes

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	
	int n=40;
	int p=5;
	
	int count=0;
	
	while((n/p)>0){
		
	 
		
		count+=(n/p);
		
		p=5*p;
		
		
	}
	cout<<count;
}
