#include<bits/stdc++.h>
using namespace std;

struct node{
	int  data;
	struct node*left;
	struct node*right;
	node(int data){
		this->left=NULL;
		this->right=NULL;
		this->data=data;
	}
};

map<node*,int >mp;

int maxsum(struct node*root){
	
	
	if(root==NULL)
	return 0;
    
	if(mp[root])
	return mp[root];
		
	int inc=root->data;
	
	if(root->left){
		
		inc+=maxsum(root->left->left)+maxsum(root->left->right);
		
	}
	
	if(root->right){
		inc+=maxsum(root->right->left)+maxsum(root->right->right);
	}
	
	int exc=maxsum(root->left)+maxsum(root->right);
	
	
	return mp[root]= max(inc,exc);
	
}

int main(){
	
	node* root = new node(10);
    root->left = new node(1);
    root->left->left = new node(2);
    root->left->left->left = new node(1);
    root->left->right = new node(3);
    root->left->right->left = new node(4);
    root->left->right->right = new node(5);
	
	int ans=maxsum(root);
	
	cout<<ans;
	
	return 0;
}
