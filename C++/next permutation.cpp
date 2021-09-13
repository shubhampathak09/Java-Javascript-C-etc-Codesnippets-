// permutation

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	
	
	int a[]={1,2,3,4,};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int count=0;
	
	do{
		
		count++;
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}cout<<endl;
		
	}while(next_permutation(a,a+n));
	
	
	cout<<count;
	
}
