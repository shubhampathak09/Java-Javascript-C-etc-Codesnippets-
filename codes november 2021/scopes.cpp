// scope check

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	
	
	int a=1;
	int b=1;
	
	{
		
		int b=2;
		{
			
			int a=3;
			cout<<"In B3 Scope.."<<a<<" "<<b<<endl;;
			
			
		}
		{
			int b=4;
			cout<<"In B4 scope.."<<a<<" "<<b<<endl;
			
			
		}
		
		cout<<"In B2 scope.."<<a<<" "<<b<<endl;
	}
	
	cout<<"In B1 scope.."<<a<<" "<<b;
	
}
