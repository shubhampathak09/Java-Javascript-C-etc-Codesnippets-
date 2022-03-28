// right view

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


void rightview(struct node*root){
	
	queue<node*>q;
	
	q.push(root);
	
	
	while(!q.empty()){
		
		int n=q.size();
		
		for(int i=1;i<=n;i++){
			
			node*temp=q.front();
			
			q.pop();
			
			if(i==n){
				
				cout<<temp->data<<" ";
			}
			
			if(temp->left!=NULL){
			
			q.push(temp->left);	
			}
			if(temp->right!=NULL){
				q.push(temp->right);
			}
			
		}
		
	}
	
	
	
	
}

int main()
{


	struct node*root=new node(10);
	
	root->left=new node(20);
	
	root->right=new node(50);
	
	
	root->left->left=new node(30);
	
	root->left->right=new node(40);
	
	root->right->left=new node(60);
	
	root->right->right=new node(100);
	
//	inorder(root);
	
	rightview(root);
	

	
}
