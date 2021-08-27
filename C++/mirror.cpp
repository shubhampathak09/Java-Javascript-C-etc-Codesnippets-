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


void inorder(struct node*root)
{
	if(root==NULL)
	return;
	
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

void mirror(struct node*node)
{
	if(node==NULL)
	return;
	
	mirror(node->left);
	mirror(node->right);
	
	struct node*temp=node->left;
	node->left=node->right;
	node->right=temp;
	
	//return temp;
}


int main()
{
	
	struct node*root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	
	inorder(root);
	
	cout<<endl;
	
	mirror(root);
	
	inorder(root);
	
}
