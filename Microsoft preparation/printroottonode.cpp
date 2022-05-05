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


void printRootToNode(vector<int>&path,struct node*root,int x){
	
	
	if(root==NULL)
	{
		return;
		
	}
	
	if(root->data==x){
		
		path.push_back(x);
		
		for(int i=0;i<path.size();i++){
			
			cout<<path[i]<<" ";
		}
		
		return ;
	}
	
	
	path.push_back(root->data);
	
	printRootToNode(path,root->left,x);
	
	printRootToNode(path,root->right,x);
	
	path.pop_back();
	
}

int main(){
	
	struct node*root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	root->left->left=new node(4);
	root->left->right=new node(5);
	root->right->left=new node(6);
	root->right->right=new node(7);
	
	int x=7;
	
	vector<int>path;
	
	printRootToNode(path,root,x);
	
}
