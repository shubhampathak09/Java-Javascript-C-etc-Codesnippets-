#include<bits/stdc++.h>
using namespace std;


// find subarray with given sum



int main(){
	
int a[]={1,4,20,3,10,5};

int n=sizeof(a)/sizeof(a[0]);

int sum=33;


int csum=0;

int i=0,j=0;

while(i<n){
//	cout<<csum<<endl;
	csum+=a[i];
//	cout<<csum<<endl;
	if(csum==sum){
		
		cout<<csum<<sum;
		cout<<j<<" "<<i;
		return 0;
	}
	else if(csum<sum){
		i++;
	}else if(csum>sum)
	{
		cout<<csum<<endl;
		csum=csum-a[j];
		j++;
	}
}	
	
}
