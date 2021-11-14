#include<bits/stdc++.h>
using namespace std;


struct node{
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


void mirror(struct node*root){
	
	
	if(root==NULL){
		return;
	}
	
	
	mirror(root->left);
	mirror(root->right);
	
	
	node*temp=root->left;
	root->left=root->right;
	root->right=temp;
	
}


void inorder(struct node*root)
{
	
	if(root==NULL){
		return;
	}
	
	
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

int main()
{
	
	struct node*root=new node(1);
	root->left=new node(3);
	root->right=new node(2);
	root->right->left=new node(5);
	root->right->right=new node(4);
	
	inorder(root);
	
	cout<<endl;

     mirror(root);
	 
	 inorder(root);	
	
}
