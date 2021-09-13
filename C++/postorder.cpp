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


void postorder(node*root)
{
	
	if(root==NULL)
	{
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
	
}

int main()
{
	
	// test code here
	
	// create a tree
	
	
	// call postorder
	
}
