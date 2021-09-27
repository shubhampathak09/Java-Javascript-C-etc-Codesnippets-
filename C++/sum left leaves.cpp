// sum of the left leaves

#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node*left;
	struct node*right;
	node(int data){
		this->data=data;
		left=NULL;
		right=NULL;
	}
};

bool isleaf(struct node*root)
{
	
	if(root->left==NULL&&root->right==NULL)
	{
		return true;
	}
	return false;
}



int check(struct node*root)
{
	
	int sum=0;
	
    if(!root){
	
//	int sum=0;
	if(isleaf(root->left)){
		sum+=root->left->data;
	}else{
		sum+=check(root->left);
	}
	
	 sum+=check(root->right);
}
	return sum;
}

//
//int sumleftleaves(struct node*root,struct node*par)
//{
////	
////	if(root->left==NULL&&root->right==NULL){
////		
////		if(root==par->left){
////			return root->data;
////		}
////		return 0;
////	}
////	
//    if(root!=NULL)
//    {
//	
//	int sum=0;
//	int leftsum=sumleftleaves(root->left,root);
//	int rightsum=sumleftleaves(root->right,root);
//	sum+=leftsum+rightsum;
//	
//	return sum;
//}
//}

int main()
{
	struct node*par=new node(-1);
	struct node*root=new node(9);
	root->left=new node(8);
	root->right=new node(6);
	root->left->left=new node(5);
	
	root->left->right=new node(2);
	
	root->right->left=new node(1);
	
	
	
	int ans=check(root);
	
	cout<<ans;
	
}


// wrong S

// check again
