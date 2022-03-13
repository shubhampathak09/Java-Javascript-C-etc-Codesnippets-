// prime number generator

#include<bits/stdc++.h>
using namespace std;

vector<int>prime(100001);

void sieve(){
	
	
	
	prime[0]=prime[1]=1;
	
	
	for(int i=2;i*i<prime.size();i++){
		
		
		if(prime[i]==0){
			
			for(int j=i*i;j<prime.size();j+=i){
				
				prime[j]=1;
				
			}
		}
		
	}
	// this will store the prime number if a number is prime -> prime[i] ==0 ok!
}

int main()
{
	
	// fo bigger input size make sure to use lonng long
	
	sieve();
	
/*	
	for(int i=0; i< 100;i++){
		cout<<i<<" "<<prime[i]<<" "<<endl;
	}
*/	
	int t;
	
	cin>>t;
	
	while(t--){
	
	int m,n;
	
	cin>>m>>n;
	
	
	for(int i=m;i<=n;i++){
	
//	cout<<"dcd";
		
		if(prime[i]==0){
			
            cout<<i<<endl;			
			
		}
		
	}
	
	}
}

// input and output 

/*
2
1 10
2
3
5
7
3 5
3
5
*/

