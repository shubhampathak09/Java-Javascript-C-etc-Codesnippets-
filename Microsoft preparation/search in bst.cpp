// search a key in bst

#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node*left;
	struct node*right;
	node(int data)
	{
		this->data=data;
		this->left=NULL;
		this->right=NULL;
	}
};


node*search(node*root,int val){
	if(root==NULL || root->data==val){
		return root;
	}
	
	if(root->data<val)
	return search(root->left,val);
	
	return search(root->right,val);
	
}





int main(){
	
	
	
}
