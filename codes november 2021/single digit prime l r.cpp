#include<bits/stdc++.h>
using namespace std;


int n=9999;

vector<int>prime(n);

void sieve(){
	
	
	prime[0]=prime[1]=0;
	for(int i=2;i*i<=n;i++){
		
		if(prime[i]==1){
			
			for(int k=i*i;k<=n;k++){
				prime[k]=0;
			}
			
		}
		
	}
}

bool isSingleDigitPrime(int n){
	
	int k=n%9 ==0 ? 9:n%9;
	
	return prime[k]==1;
	
}

int main()
{
	
	int l=4;
	int r=10;
	
	int ct=0;
	
	for(int i=l;i<=r;i++){
		
		if(prime[i]&&isSingleDigtPrime(i))
		ct++;
	}
	
	cout<<ct;
}
