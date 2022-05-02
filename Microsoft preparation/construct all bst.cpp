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


void preorder(struct node*root){
	
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

vector<struct node*> constructBst(int s,int e){
	
	vector<struct node*> list;
	
	if(s>e){
		list.push_back(NULL);
		return list;
	}
	
	for(int i=s;i<=e;i++){
		
		vector<struct node*>leftSubtree=constructBst(s,i-1);
		vector<struct node*>rightSubtree=constructBst(i+1,e);
		
		for(int j=0;j<leftSubtree.size();j++){
			
			struct node*left=leftSubtree[j];
			for(int k=0;k<rightSubtree.size();k++){
				struct node*right=rightSubtree[k];
				
				struct node*root=new node(i);
				root->left=left;
				root->right=right;
				list.push_back(root);
			}
		}
		
	}
	
	return list;
}

int main(){
	
	
	int n=3;
	
	int s=1;
	
	vector<struct node*>list=constructBst(s,n);
	
	for(int i=0;i<list.size();i++){
		preorder(list[i]);
		cout<<endl;
	}
	
}
