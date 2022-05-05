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


void ksmall(struct node*root,int &count,int k){
	
	if(root==NULL)
	return ;
	
	
	ksmall(root->left,count,k);
	
	count++;
	if(count==k){
		cout<<root->data;
		return;
	}
	
	ksmall(root->right,count,k);
}


int main(){
	
	
	struct node*root=new node(20);
	
	root->left=new node(8);
	
	root->right=new node(22);
	
	root->left->left=new node(4);
	
	root->left->right=new node(12);
	
	root->left->right->left=new node(10);
	
	root->left->right->right=new node(14);
	
	int count=0;
	
	ksmall(root,count,3);
	
	
}
