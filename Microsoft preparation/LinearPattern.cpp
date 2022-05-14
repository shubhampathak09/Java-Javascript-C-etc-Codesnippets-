// Linear Pattern
#include<bits/stdc++.h>
using namespace std;


void printPattern(int n){
	
    if(n==1){
    	cout<<10<<" ";
    	return;
	}
	
	printPattern(n-1);
	// n 1 10
	// n 2 5
	//10 ( n-1) /5
	if(n%2==0){
    	
	cout<<(10*(n-2))/5<<" ";
}
	else
{
    int k=n;
    k==3 ? n-1:n-2;
	cout<< (k)*10<<" ";
	
}
}

int main(){
	
	
	printPattern(5);
}

//check
