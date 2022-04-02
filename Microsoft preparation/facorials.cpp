//Factorial!

#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
	
	if(n==1||n==0)
	return 1;
	
	
	int rem=factorial(n-1);
	
	return rem*n;
	
	
}

int main(){
	
	
	int n;
	
 cin>>n;
	
	int ans=factorial(n);
	
	
	cout<<ans;



	
}
