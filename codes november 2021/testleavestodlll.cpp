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
		this->next=NULL;
	}
};

struct node*head=NULL,*curr,*prev=NULL;

struct node*dosomething(struct node*root,struct node*head)
{
	
	if(root==NULL){
		return NULL;
	}
	
	if(root->left==NULL&&root->right==NULL){
		
		
		if(head==NULL){
			
		//	prev->right=curr;
			head=root;
		//	curr=head;
		//	curr->right=NULL
		//	curr->left=prev;
		//	prev=curr;
		}else{
			
			
		
		
		}
			prev->right=curr;
			curr=root;
			curr->right=NULL;
			curr->left=prev;
			prev=curr;
		
	}
	
	root->left=dosomething(root->left,head);
	root->right-=dosomething(root->right,head);
	
	
	return head;
	
}
 /// som shite


int main()
{
	
	
	
	
	// test here
	
}
