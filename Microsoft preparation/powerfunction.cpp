// power function

#include<bits/stdc++.h>
using namespace  std;

int power(int a,int n){
	
	if(n==0)
	return 1;
	
	return a*power(a,n-1);
	
}

int fastpower(int a,int n){
	
	if(n==0)
	return 1;
	
	
	int sbprob=fastpower(a,n/2)*fastpower(a,n/2);
	
	if(n&1){
		return a*sbprob;
			}
    else
	return sbprob;	
}

int main(){
	
	cout<<fastpower(5,4);
	
}
