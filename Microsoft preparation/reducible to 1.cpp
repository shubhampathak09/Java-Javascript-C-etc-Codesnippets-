// reducable to 1

#include<bits/stdc++.h>
using namespace std;


int solve(int n){
 
 
 if(n==1)
 return 0;
 
 else if(n%2==0)
 return solve(n/2) +1;
 
 else if(n%3==0)
 return  solve(n/3)+1;
 
 else
 return solve(n-1)+1;
	
	
}

int main(){
	
	
	cout<<solve(15);
}
