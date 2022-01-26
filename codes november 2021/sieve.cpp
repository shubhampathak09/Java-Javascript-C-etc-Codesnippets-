// sieve 

#include<bits/stdc++.h>
using namespace std;


vector<int>prime(10001);


void preprocess(){
	
	
	prime[0]=prime[1]=1;   // 0 ->prime and 1- > not prime
	
	
	for(int i=2;i*i<=10001;i++){
		
		if(prime[i]==0){
			
			for(int j=i*i;j<=10001;j+=i){
				prime[j]=1;
			}
			
		}
		
	}
	
	for(int i=1;i<=100;i++){
		if(prime[i]==0){
			cout<<i<<endl;
		}
	}
	
}

int main()
{
	cout<<"Printing prime for 1 to 100.. "<<endl;
	
	preprocess();
	
}
