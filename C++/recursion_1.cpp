// recur 1

// explain the functionality of following function


#include<bits/stdc++.h>
using namespace std;



int fun1(int x,int y)
{
	
	
	if(x==0)
	{
		return y;
	}
	
	return fun1(x-1,x+y);
	
}

// wll cover sevvera; reursive impl

int main()
{

int x=5;
int y=2;

// 5,2   4 , 5+2 -> 3,4+5+2, 2,3+4+5+2, 1,2+3+4+5+2, 0,1+2+3+4+5+2  =17   


int ans=fun1(x,y);


cout<<ans<<endl;


return 0;

//
//
	
	
	
}
