// leaf to leaf path sum

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

int ans=INT_MIN;

 int maxpathleafsum(struct node*root){
 	
 	if(root==NULL)
 	return 0;
 	
 	 
	 int left=maxpathleafsum(root->left);
	 
	 int right=maxpathleafsum(root->right);
	 
	/* 
	 if(root->left==NULL)
	 return right+ root->data;
	 *
	 if(root->right==NULL)
	 return left+root->data;
	 */
	 int temp=max(left,right)+root->data;
	 
	  ans=max(ans,left+right+root->data);
	 
	 
	 
	 return temp;
	 
 }

void inorder(struct node*root){
	
	if(root==NULL)
	return;
	
	inorder(root->left);
	
	cout<<root->data<<
	 " ";
	
	inorder(root->right);
}

int main(){
	
	
struct node*root=new node(1);

root->left=new node(2);

root->left->right=new node(-4);


root->right=new node(3);

root->right->left=new node(5);

root->right->right=new node(6);

root->right->left->left=new node(7);

root->right->left->right=new node(8);


	inorder(root);
	
	cout<<endl;
	
maxpathleafsum(root);

cout<<ans;	
	
}
