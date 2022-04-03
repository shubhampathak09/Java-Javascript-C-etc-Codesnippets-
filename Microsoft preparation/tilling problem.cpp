// tilling problem

#include<bits/stdc++.h>
using namespace std;

int tilling(int n){
	
	if(n<0)
	return 0;
	
	if(n<4)
	return 1;
    
    if(n==4)
    return 2;
    
    
    return tilling(n-4)+tilling(n-1);
	
}

int main(){
	
	cout<<tilling(5);
	
}
