#include<bits/stdc++.h>
using namespace std;


struct node
{
	
	int data;
	
	node*left;
	node*right;
	node(int data){
		this->data=data;
		this->left=NULL;
		this->right=NULL;
	}
};


bool search(struct node*root,int val){
	
	
	if(root==NULL){
		return false;
	}
	
	if(root->data==val){
		return true;
	}else if(root->data>val){
		return search(root->left,val);
	}else if(root->data<val){
		return search(root->right,val);
	}
	return NULL;
}


int main()
{
	
	struct node*root=new node(10);
	
	root->left=new node(5);
	
	root->right=new node(20);
	
	cout<<search(root,1)<<" "<<search(root,20);
	
}
