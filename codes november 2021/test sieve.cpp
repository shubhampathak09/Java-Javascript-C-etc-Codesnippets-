#include<bits/stdc++.h>
using namespace std;


void testSieve( int num[],int n){
	

for(int i=0;i<10000;i++)
	num[i]=1;
	
	
	num[0]=num[1]=0;
	
	
	for(int i=2;i*i<1000;i++){
		
		if(num[i]==1){
			
			
			for(int k=i*i;k<1000;k+=i){
				
			num[k]=0;	
				
			}
			
		}
		
	}
	
}

int main(){
	
	
	int num[10000];
	
	testSieve(num,10000);
	
	cout<<num[3]<<" "<<num[4]<<" ";
    
    
    for(int i=500;i<1000;i++){
    	if(num[i]==1){
    		
    		cout<<i<<endl;
		}
    	
	}
    
}

