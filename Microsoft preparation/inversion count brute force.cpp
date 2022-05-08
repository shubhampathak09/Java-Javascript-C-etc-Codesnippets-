// inversion count bf

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	
	vector<int>a={8,4,2,1};
	
	int n=a.size();
	
	int count=0;
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			
			if(j>i && i<n &&j<n){
				
				if(a[i]>a[j])
				{
				
				count++;
			}
			}
			
		}
	}

cout<<count;	
}

