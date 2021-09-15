#include<bits/stdc++.h>
using namespace std;

struct node{
	
	int data;
	node*left;
	node*right;
	
	node(int data){
		
		this->data=data;
		this->left=NULL;
		this->right=NULL;
		
	}
};


void getParent(struct node*root,int val,int parent){
	
	 
	 if(root==NULL)
	 return;
	 
	 
	 if(root->data==val){
	 
	 	cout<<"Node "<<root->data<<" Parent "<<parent;
	 		return;
	 }
	 else
	 {
	 	
	 	
	 getParent(root->left,val,root->data);	
	 getParent(root->right,val,root->data);
	 }
	 
}

int main()
{
	
	struct node*root=new node(1);
	
	root->left=new node(2);
     
     root->right=new node(3);
     
     root->left->left=new node(4);
     
     root->right->right=new node(5);
     
     
     getParent(root,5,-1);
     
     cout<<endl;
     
     getParent(root,2,-1);
     
     cout<<endl;
     
     getParent(root,4,-1);
	
}
