// square root decomposition

#include<bits/stdc++.h>
using namespace std;


#define maxn 10000
#define sqrsize 100

int arr[maxn];
int block[sqrsize];
int blk_size;


void updated(int idx,int val){
	
	
	int blockNumber=idx/blk_size;
	
	block[blockNumber]+=val-arr[idx];
	arr[idx]=val;
	
	
}

int query(int l,int r){
	
	
	int sum=0;
	while(l<r&&l%blk_size!=0&&l!=0){
		
		sum+=arr[l];
		l++;
		
	}
	
	while(l+blk_size<=r){
		sum+=block[l/blk_size];
		l+=blk_size;
	}
	while(l<=r){
		sum+=arr[l];
		l++;
	}
	
	return sum;
}


void preprocess(int input[],int n){
	
	int blk_idx=-1;
	blk_size=sqrt(n);
	
	
	for(int i=0;i<n;i++){
		arr[i]=input[i];
		
		if(i%blk_size==0){
			blk_idx++;
		}
		
		block[blk_idx]+=arr[i];
	}
	
}

int main()
{
	
	int input[]={1,5,2,4,6,1,3,5,7,10};
	
	int n=sizeof(input)/sizeof(input[0]);
	
	
	preprocess(input,n);
	
	
	
	cout<<query(3,8)<<endl;
	
	
	cout<<query(1,6)<<endl;
	
}
