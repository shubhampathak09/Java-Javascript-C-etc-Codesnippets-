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


node*insert(node*root,int val){
	
	if(root==NULL)
	return new node(val);
	
	if(val<root->data)
	root->left=insert(root->left,val);
	
	else
	root->right=insert(root->right,val);
	
	
	return root;
	
	
	
}


void inorder(struct node*root){
	
	if(root==NULL)
	return;
	
	inorder(root->left);
	
	cout<<root->data<<" ";
	
	inorder(root->right)
;
}


int main(){
	
	struct node*root=NULL;
	
	insert(root,6);
	
	insert(root,3);
	
	insert(root,7);
	
	insert(root,2);
	
	insert(root,1);
	
	
	inorder(root);
	
}
