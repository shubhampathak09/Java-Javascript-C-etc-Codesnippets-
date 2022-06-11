#include<bits/stdc++.h>
using namespace std;


void nullPoints(int n,double magnets[],double getAnswer[]){
	
	
	for(int i=0;i<n-1;i++){
		
		
		double low=magnets[i];
		
		double high=magnets[i+1];
		
		double mid=low;
		
		while(low<high){
			
			mid=low+(high-low)/2;
			
			double left=0.00;
			double right=0.00;
			
			for(int j =0;j<n;j++){
				
				if(j<=i){
					left+=(double) 1/(mid-magnet[j]);
				}
				else
				{
					right+=(double)1/(magnet[j]-mid);
				}
			}
			
			if(abs(left-right)<0.000001)
			break;
			else if(left<right)
			high=mid;
			else
			low=mid;
		}
		
		getAnswer[i]=mid;
	}


return;	
}

int main(){
	
	
// tezs code	
	
}
