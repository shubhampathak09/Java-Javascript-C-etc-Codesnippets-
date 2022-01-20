#include<bits/stdc++.h>
using namespace std;


struct node
{
	
	int data;
	struct node*left;
	struct node*right;
};


int sumgc(struct node*root, map<struct node*, int>&mp);



int maxsum(struct node*root,map<struct node*, int>&mp){
	
if(root==NULL)
{
	return 0;
	}	


if(mp.find(root)!=mp.end()){
	return mp[root];
}

int incl=root->data +sumgc(root,mp); 	
int excl=maxsum(root->left,mp)+maxsum(root->right,mp);

return mp[root]=max(incl,excl);
	
}

//map<struct node*, int>&mp
int sumgc(struct node*root,map<struct node*,int>&mp){
	
int sum=0;


if(root->left){
	
	sum+=maxsum(root->left->left,mp);
}	
	
if(root->right){
	sum+=maxsum(root->right->right,mp);
}	

return sum;	
}
