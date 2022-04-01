#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node*left;
	struct node*right;
	
	node(int data){
		this->data=data;
		this->left=NULL;
		this->right=NULL;
	}
};


int findminbelowNode(struct node*root){
	
	if(root==NULL)
	return INT_MAX;
	
	int minleft=findminbelowNode(root->left);
	int minright=findminbelowNode(root->right); 
	
	return min(min(minleft,minright),min(root->left->data,root->right->data));
	
	
}

int ans=INT_MIN;

int maxdiff(struct node*root){
	
	
	int left=maxdiff(root->left);
	int right=maxdiff(root->right);
	
	int mindiff=root->data-findminbelowNode(root);
	
	ans=max(max(mindiff,max(left,right)),ans);
	
//	ans=max(ans,mindiff);
	
	return mindiff;
}


int main(){
	
	
	struct node*root=new node(8);
	
	root->left=new node(3);
	
	root->right=new node(10);
	
	root->left->left=new node(1);
	
	
	root->left->right=new node(6);
	
	root->left->right->left=new node(4);
	
	root->left->right->right=new node(7);
	
	
	root->right->right=new node(14);
	
	root->right->right->left=new node(13);
	
	
	int res=findminbelowNode(root);
	
	cout<<res;
	
	
}


// gg recursion



