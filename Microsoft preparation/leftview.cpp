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

void leftview(struct node*root){
	
	
	queue<node*>q;
	
	q.push(root);
	
	while(!q.empty()){
		
		
		int n=q.size();
	
	   // cout<<n<<endl;
	     
	//	q.pop();
		
		
		for(int i=1;i<=n;i++){
			
				node *curr=q.front();
				q.pop();
			if(i==1){
				
				cout<<curr->data<<endl;
			}
			
			if(curr->left!=NULL)
			q.push(curr->left);
			
			if(curr->right!=NULL)
			q.push(curr->right);
			
		}
		
	}
	
}

void inorder(struct node*root){
	
	if(root==NULL)
	return;
	
	inorder(root->left);
	
	cout<<root->data<<" ";
	
	inorder(root->right);
	
}

int main()
{
	
	struct node*root=new node(10);
	
	root->left=new node(2);
	
	root->right=new node(3);
	
	
	root->left->left=new node(7);
	
	root->left->right=new node(8);
	
	root->right->right=new node(15);
	
	root->right->right->left=new node(14);
	
//	inorder(root);
	
	leftview(root);
	
}
