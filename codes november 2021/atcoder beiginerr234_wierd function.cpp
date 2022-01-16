#include<bits/stdc++.h>
using namespace std;


int f(int x){
	
	return x*x+2*x+3;
	
}


int solve(){
	
	int t;
	cin>>t;
	
	int ans=f(f(f(t)+t)+f(f(t))); 
	
	cout<<ans;
	
	return ans;
	
}

int main()
{
	
 solve();
	
	
	
	
	
}
