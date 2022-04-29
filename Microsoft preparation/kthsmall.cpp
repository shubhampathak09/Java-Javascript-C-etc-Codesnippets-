// kth smallest element in bst
#include<bits/stdc++.h>
using namespace std;


struct node
{
	int data;
	struct node*left;
	struct node*right;
	node(int data){
		this->data=data;
		this->left=NULL;
		this->right=NULL;
	}
};

node* kthsmall(struct node*root,int k){
	
	if(root==NULL)
	return 0;
	
	
	node*left=kthsmall(root->left,k);
	if(left!=NULL)
	return left;
	
	k--;
	if(k==0)
	return root;
	
	
	return kthsmall(root->right,k);
	
}
int main(){
	
	
	
	
}
