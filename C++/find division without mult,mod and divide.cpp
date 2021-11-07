#include<bits/stdc++.h>
using namespace std;




int solve(int a,int b)
{
	
	
	if(a<b)
	return 0;
	
	//cout<<"1";
	
	return 1+solve(a-b,b);
	
}

int main()
{
	
	cout<<solve(10,3);
	// do the sign check later if rqy
	
	// read bit solution
}
