// Happy new Year 2022

/*
Problem Statement
Among the positive integers that consist of 0's and 2's when written in base 10, find the K-th smallest integer.

Constraints
K is an integer between 1 and 10 
18
  (inclusive).
  */


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
// I/o
/*
456
222002000
*/
