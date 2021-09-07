// top view of tree
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



void verticalorder(struct node*root){
	
	if(root==NULL){
		return;
	}
	
	
	queue<pair<node*,int>>q;
	map<int,int>mp;
	
	q.push({root,0});
	
	while(!q.empty()){
		
		auto temp=q.front();
		q.pop();
		
		if(mp.find(temp.first->data)==mp.end()){
			mp[temp.second]=temp.first->data;
		}
		
		if(temp.first->left!=NULL){
			q.push({temp.first->left,temp.second-1});
		}
		if(temp.first->right!=NULL){
			q.push({temp.first->right,temp.second+1});
		}
	}
	
	for(auto x:mp){
		cout<<x.second<<" ";
	}
	
}

int main()
{
	
	// create tree and then call function
	
	
	// call function here
	
}
