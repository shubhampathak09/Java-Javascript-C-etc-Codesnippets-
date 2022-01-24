// macros

#include<bits/stdc++.h>
using namespace std;

#define a (x+1)

int x=2;


void b(){
	
	
	x=a;
	cout<<"From b function.."<< x<<endl;
	
}

void c(){
	
	int x=1;
	cout<<"From c function.."<<a<<endl;
	
}

int main()
{
	
	b();
	
	c();
	
	
}
