#include<bits/stdc++.h>
using namespace std;

#define M 5
#define N 5

struct trie{
	
	
	bool isend=false;
	trie*left=NULL;
	trie*right=NULL;
	
};


bool insert(trie*root,int *arr){
	
	trie*curr=root;
	
	for(int i=0;i<N;i++){
		
		if(arr[i]==0){
			
			if(curr->left==NULL){
				curr->left=new trie();
			}
			curr=curr->left;
		}else{
			if(curr->right==NULL){
				curr->right=new trie();
			}
			curr=curr->right;
		}
	}
	
	if(curr->isend==false){
		curr->isend=true;
		return true;
	}
	
	else
	return false;
}

int main()
{
	trie*root=new trie();
	
	int mat[M][N]={{1,0,0,1,0},{0,1,1,0,0},{1,0,0,1,0},{0,0,1,1,0},{0,1,1,0,0}};
	
	
	
	for(int i=0;i<M;i++){
		if(insert(root,mat[i])==false){
			cout<<"Duplicate row found at:# "<<i+1<<endl;
		}
	}
}
