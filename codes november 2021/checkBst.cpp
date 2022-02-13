// check if bst

#include<bits/stdc++.h>
using namespace std;


struct node
{
	int data;
	struct node*left;
	struct node*right;
	node(int data){
		this->left=NULL;
		this->right=NULL;
		this->data=data;
	}
};

int maxvalue(struct node*root){
	
	if(root==NULL)
	return INT_MIN;
	
	int mx=root->data;
	
	int maxleft=maxvalue(root->left);
	int maxright=maxvalue(root->right);
	mx=max(mx,max(maxleft,maxright));
	
	
	return mx;
	
}
int minval(struct node*root){
	
	if(root==NULL)
	return INT_MAX;
	
	int mn=root->data;
	
	int minleft=minval(root->left);
	int minright=minval(root->right);
	mn=min(mn,min(minleft,minright));
	return mn;
}

bool checkBST(struct node*root){
	
	
	if(root==NULL)
	return 1;
	
  if(root->left!=NULL&&maxvalue(root->left)>=root->data)
  return 0;
  
  if(root->right!=NULL&&minval(root->right)<=root->data)	
	return 0;
	
	if(checkBST(root->left)==false||checkBST(root->right)==false)
	return 0;
	
	return 1;
	
}


int main(){
	
	struct node*root=new node(3);
	
	root->left=new node(2);
	
	root->right=new node(5);
	
	root->left->left=new node(1);
	
	root->left->right=new node(4);
	
	cout<<maxvalue(root->left);
	cout<<minval(root->right);
}
