// recover bst

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




void inorder(struct node*root,struct node*&first,struct node*&middle,struct node*&last,struct node*&prev){
	
	
	if(root==NULL)
	return;
	
	inorder(root->left,first,middle,last,prev);
	
	if(prev!=NULL&&root->data<prev->data){
		
		if(first==NULL)
	{
		first=prev;
		middle=root;
		
		//cout<<first->data<<endl;
		//cout<<middle->data<<endl;
		
	}
		else{
		last=root;
	}
	
prev=root;	
	}
}

	


void inorder1(struct node*root){
	
	if(root==NULL)
	return;
	
	inorder1(root->left);
	cout<<root->data<<" ";
	inorder1(root->right);
}


void recoverTree(struct node*root){
	
	cout<<"vff";
 
	
	struct node*first=NULL;
	struct node*middle=NULL;
	struct node*last=NULL;
    struct node*prev=new node(INT_MIN);
	
	inorder(root,first,middle,last,prev);
	
 
	
	if(first&&last)
	swap(first->data,last->data);
    else
	swap(first->data,middle->data);		
}

int main(){
	
	struct node*root=new node(3);
	root->left=new node(4);
	root->right=new node(5);
	
	inorder1(root);
	
	cout<<endl;
	
	
	recoverTree(root);
	
	inorder1(root);


}

// fml
