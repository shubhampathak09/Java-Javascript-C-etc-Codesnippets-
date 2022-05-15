// search a key in bst

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


node*search(node*root,int val){
	if(root==NULL || root->data==val){
		return root;
	}
	
	if(root->data<val)
	return search(root->left,val);
	
	return search(root->right,val);
	
}


node*insert(node*root,int val){
	
	if(root==NULL)
	return new node(val);
	
	if(val<root->data)
	root->left=insert(root->left,val);
	
	else
	root->right=insert(root->right,val);
	
	
	return root;
	
	
	
}

node *minNode(node*root){
	
	node*curr=root;
	
	
	while(curr!=NULL && curr->left!=NULL){
		curr=curr->left;
	}
	
	return curr;
}

void inorder(struct node*root){
	
	if(root==NULL)
	return;
	
	inorder(root->left);
	
	cout<<root->data<<" ";
	
	inorder(root->right);
}


struct node *deleteNode(node*root,int key){
	
	if(root==NULL)
	return NULL;
	
	
	if(key<root->data){
		root->left= deleteNode(root->left,key);
		
	}
	else if(key>root->data){
		root->right= deleteNode(root->right,key);
	}
	else
	{
		
		if(root->left==NULL && root->right==NULL)
		return NULL;
		
		else if(root->left==NULL)
		{
			node*temp=root->right;
			free(root);
			return temp;
		}
		else if(root->right==NULL){
			node*temp=root->left;
			free(root);
			return temp;
		}
		
		
		struct node*temp=minNode(root->right);
		
		
		root->data=temp->data;
		
		root->right=deleteNode(root->right,temp->data);
		
	 } 
 
	return root;
	
	 
}

int main(){
	
	struct node*root=NULL;
	
root=	insert(root,6);
	
root=	insert(root,3);
	
root=	insert(root,7);
	
root=	insert(root,2);
	
root=	insert(root,1);
	
	
	
	inorder(root);
	
 node*s1=search(root,3);
 
 cout<<endl;
 
 if(root!=NULL)
 cout<<"found";


struct node*mini=minNode(root);

cout<<endl;

if(mini!=NULL)
{
	cout<<"minimum value is.."<<mini->data;
}


root=deleteNode(root,7);

cout<<endl;

inorder(root);

}
