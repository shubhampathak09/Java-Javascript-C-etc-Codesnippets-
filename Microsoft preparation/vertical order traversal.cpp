// binary tree vertical traversal

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


void verticaltraversal(struct node*root,map<int,vector<int>>&mp,int hd){
	
	
	if(root==NULL)
	return;
	
	mp[hd].push_back(root->data);
	
	verticaltraversal(root->left,mp,hd-1);
	
	verticaltraversal(root->right,mp,hd+1);
	
	
}




int main(){
	

int hd=0;
map<int,vector<int>>mp;

struct node*root=new node(3);

root->left=new node(2);
 
root->left->right=new node(1); 
verticaltraversal(root,mp,hd);
	
	
map<int,vector<int>>::iterator it;

for(it=mp.begin();it!=mp.end();++it){
	
 sort(mp[it->first].begin(),mp[it->first].end());
	
for(int i=0;i<it->second.size();i++){
	
	cout<<it->second[i]<<" ";
}	
cout<<endl;
	
}
	
}
