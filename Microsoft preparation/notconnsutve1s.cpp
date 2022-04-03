#include<bits/stdc++.h>
using namespace std;


//binary string not haing consecutive 1


int main(){
	
	
	

	
	int n=5;
  
  if(n==1){
  	cout<<1;
  	return 0;
  }	
	
	int countz=1;
	int count1=1;
	
	for(int i=2;i<=n;i++){
		
		int nc1=countz;
		int nc0=countz+count1;
		
		countz=nc0;
		count1=nc1;
		
	}
	
	cout<<countz+count1;
}
