#include<bits/stdc++..h>
using namespace std;


struct node{
	int data;
	struct node*left;
	sturct node*right;
	node(int data){
		node->left=NULL;
		node->right=NULL;
		node->data=data;
	}
};

void storeInorder(struct node*root,vector<int>&vect){
	
	
	if(root==NULL){
		return;
	}
	
	storeInorder(root->left);
	vect.push_back(root->data);
	storeInorder(root->right);
}




int main(){
	
struct node*root1,root2;

vector<int>vect1,vect2;

storeInorder(root1,vect1);
storeInorder(root2,vect2);

int s=0;	
	
}
