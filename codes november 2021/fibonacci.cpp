#include<bits/stdc++.h>
using namespace std;

int Fib(int n);


int main()
{
	
	
	int n=10;
	
//	int dp[n];
	
	int fibn=Fib(n);
	
	
	cout<<fibn;
	
}

int Fib(int n){
	
	if(n==0||n==1)
	return n;
	
	int fibm1=Fib(n-1);
	
	int fibm2=Fib(n-2);
	
	int fibn=fibm1+fibm2;
	
	return fibn;
	
}
