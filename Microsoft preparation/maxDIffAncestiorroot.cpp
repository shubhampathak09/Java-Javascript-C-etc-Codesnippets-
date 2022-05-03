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

/*
  1
 /  \
 2   nu  // node->value -something
/ \
nu nu
*/
int maxDiffCheck(struct node*root,int &res){
	
	
	if(root==NULL){
		return INT_MAX;
	}
	
	if(root->left==NULL&&root->right==NULL)
	  {
	  	return root->data;
	  }
	  
	  int val= min(maxDiffCheck(root->left,res),maxDiffCheck(root->right,res));
	  
	  res=max(res,root->data-val);
	  
	  return min(val,root->data);
}
int maxDiffFun(struct node*root){
	
	int res=INT_MIN;
	
	maxDiffCheck(root,res);
	
	
	return res;
}



int main(){
	
struct node*root=new node(8);

root->left=new node(3);

root->right=new node(10);

root->left->left=new node(1);

root->left->right=new node(6);

root->left->right->left=new node(4);

root->left->right->right=new node(7);

root->right=new node(10);

root->right->right=new node(14);

root->right->right->left=new node(13);


cout<<maxDiffFun(root);	
}
 
