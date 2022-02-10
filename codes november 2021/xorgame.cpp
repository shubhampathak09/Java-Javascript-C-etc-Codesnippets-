#include<bits/stdc++.h>
using namespace std;


int xorgame(int k){
	
	
	if(k==1)
	return 2;
	if(k^(k+1)==0)
	return k>>1;
	return -1;
	
}

int main()
{
	
	
	cout<<xorgame(7);
	
}
