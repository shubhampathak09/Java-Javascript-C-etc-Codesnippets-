// intro to bitmask
#include<bits/stdc++.h>
using namespace std;

int main(){
	
	
	int set=15;
	
	//  - - - - - - - - -
	//  14               1 0  
	
	
	for(int i=0;i<=9;i++){
		
		
		if((set & (1<<i))!=0)
		{
			cout<<(i+1)<<" ";
		}
	}
	
}
