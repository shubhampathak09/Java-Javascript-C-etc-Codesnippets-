// root to leaf path sum

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


int process(string number){
	
	int result=0;
	for(int i=0;i<number.length();i++){
		result=10 * result + number[i]-'0';
	}
	return result;
}

void rootToLeaf(struct node*root,string path,int &sum){
	
	if(root==NULL)
	return;
	
	if(root->left==NULL && root->right==NULL){
		
		path+=to_string(root->data);
		
		cout<<path<<endl;
		
		sum+=process(path);
	}
	
	path+=to_string(root->data);
	
	rootToLeaf(root->left,path,sum);
	rootToLeaf(root->right,path,sum);
	
	path.pop_back();
}

int main(){
	
	struct node*root=new node(1);
	
	root->left=new node(2);
	
	root->right=new node(3);
	
	
	int sum=0;
	string path=""
;	rootToLeaf(root,path,sum);
	
	cout<<sum;
	
}
