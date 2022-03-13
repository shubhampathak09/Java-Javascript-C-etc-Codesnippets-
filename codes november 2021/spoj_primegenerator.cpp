// prime number generator

#include<bits/stdc++.h>
using namespace std;


void sieve(){
	
	vector<int>prime(100001);
	
	prime[0]=prime[1]=1;
	
	
	for(int i=2;i*i<prime.size;i++){
		
		
		if(prime[i]==0){
			
			for(int j=i;j<prime.size();j+=i){
				
				prime[j=1;
				
			}
		}
		
	}
	// this will store the prime number if a number is prime -> prime[i] ==0 ok!
}

int main()
{
	
	
	
}
