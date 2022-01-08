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



void printrootleaf(struct node*root,string path){
	
	
	if(root==NULL)
	{
		return;
	}
	path=path+" "+to_string(root->data);
	
	if(root->left==NULL&&root->right==NULL)
	{
		cout<<path<<endl;
	 
	}
	else{
	
	printrootleaf(root->left,path);
	printrootleaf(root->right,path);
}
}

int main()
{
	
	struct node*root=new node(10);
	
	root->left=new node(8);
	
	root->right=new node(2);
	
	root->left->left=new node(2);
	root->left->right=new node(5);
	
	
	
	string path="";
	
	printrootleaf(root,path);
}
