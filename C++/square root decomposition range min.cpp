// sqaure root range mini

#include<bits/stdc++.h>
using namespace std;

int ar[10000];
int block[100];
int block_size;



int rangemin(int l,int r)
{
	
	
	int mini=INT_MAX;
	
	while(l<=r&&ar[l]%block_size!=0&&l!=0){
		
		mini=min(ar[l],mini);
		
		l++;
	}
	while(l+block_size<=r){
		
		mini=min(mini,block[l/block_size]);
		l=l+block_size;
	}
	while(l<=r){
		min(mini,ar[l]);
		l++;
	}
	return mini;
}

void preprocess(int input[],int n){

for(int i=0;i<100;i++)
block[i]=INT_MAX;
	
int bk_index=-1;
block_size=sqrt(n);

for(int i=0;i<n;i++)
{
	
ar[i]=input[i];	

if(i%block_size==0){
	
	bk_index++;
	
}
block[bk_index]=min(block[bk_index],ar[i]);
	
	}	
	
	
}

int main()
{
	int inp[]={3,4,5,1,3,5,6,7,8};
	
	int n=sizeof(inp)/sizeof(inp[0]);
	
	preprocess(inp,n);
	
	cout<<rangemin(0,2);
	
	cout<<endl;
	
	cout<<rangemin(1,3);
	
	
	//check some bug
}
