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
	
    int input[] = {2,4,7,1,5,8,9,10,3,6};
	
	int n=sizeof(input)/sizeof(input[0]);
	
	
	preprocess(input,n);
	
	
	
	cout<<"first query:-"<<query(0,3)<<endl;
	
	
	cout<<"second query:-"<<query(4,9)<<endl;
	
	
	
	updated(5,8);
	
	
	cout<<"third query:-"<<query(3,7)<<endl;


    // works on non square root as well
}
