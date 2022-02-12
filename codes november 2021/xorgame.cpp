#include<bits/stdc++.h>
using namespace std;


int xorgame(int k){
	
	
	if(k==1)
	return 2;
	if(k^(k+1)==0)
	return k>>1;
	return -1;
	
}


// try observint the pattern from 1 to 10 will get the logic

int main()
{
	
	
	cout<<xorgame(7);
	
}
