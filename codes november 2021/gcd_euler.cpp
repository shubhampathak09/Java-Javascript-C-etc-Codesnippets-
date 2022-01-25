// finding gcd algorithm

#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
	
	
	return a%b==0 ? b : gcd(b,a%b);
	
}

int main(){
	
	int x,y;
	
	cin>>x>>y;
	
	cout<<gcd(x,y);
	
	
}
