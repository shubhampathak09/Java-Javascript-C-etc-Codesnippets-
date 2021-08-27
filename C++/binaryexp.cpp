	// binary expo o(log(N))
	#include<bits/stdc++.h>
	using namespace std;
	
	
	int bexpo(int a,int b)
	{
		
		
		if(b==0)
		return 1;
		
		int res=bexpo(a,b/2);
		
	 if(b%2==0)
	{
		return res*res;
	}else
	return a*res*res;
		
	}
	
	int main()
	{
		
		cout<<bexpo(4,3);
		
		
	}
