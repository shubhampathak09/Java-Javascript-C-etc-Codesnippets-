#include<bits/stdc++.h>
using namespace std;

	vector<int>arr;

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

void inorder(vector<int>&arr,struct node*root){
	
	
	if(root==NULL)
	return;
	
	inorder(arr,root->left);
	
	cout<<root->data;
	arr.push_back(root->data);
	
	inorder(arr,root->right);
	
}

int i=0;

node*recoverBST(struct node*root){
	
	if(root==NULL)
	return  root;
	
	root->left=recoverBST(root->left);
	
	if(root->data!=arr[i]){
		root->data=arr[i];
		i++;
	}
	
	root->right=recoverBST(root->right);
	
	return root;
}


int main(){
	
	

	
	struct node*root=new node(3);
	root->left=new node(2);
	root->right=new node(1);
	
	inorder(arr,root);
	
	/*
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
	*/
	
	sort(arr.begin(),arr.end());
	
	cout<<endl;
	/*	
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
	*/
	
	root=recoverBST(root);
	
	inorder(arr,root);
	
	
	
	
	
//	cout<<arr.size();
	
	
	// noice // noice
	
}
