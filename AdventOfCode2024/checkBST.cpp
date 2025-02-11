#include<bits/stdc++.h>
using namespace std;


struct node
{
	int data;
	node *left;
	node *right;
	
	node(int data){
		this->data =data;
		left = NULL;
		right = NULL;
	}
};

bool checkBst(struct node * root, int  &prev){
	
	if(!root){
		return true;
	}
	
	if(!checkBst(root -> left,prev))
	{
		return false;
	}
	
	if(prev>=root->data){
		return false;
	}
	prev = root->data;
	return checkBst(root->right,prev);
}

int main()
{
	
	int prev = INT_MIN;
	
	struct node * root = new node(1);
	root->left = new node(2);
	root->right = new node(3);
	
	if(checkBst(root,prev)){
		cout<<"Given tree is BST ."<<endl;
	}else
	cout<<"Given tree is not BST ."<<endl;
}
