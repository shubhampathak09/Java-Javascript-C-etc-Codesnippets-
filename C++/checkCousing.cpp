#include<bits/stdc++.h>
using namespace std;



struct node
{
	
	
	int data;
	node*left;
	node*right;
	node(int data)
	{
		this->data=data;
		this->left=NULL;
		this->right=NULL;
	}
};

void getParent(struct node*root,int val,int &parent){
	
	
	if(root==NULL)
	{
		return;
	}
	if(root->data==val)
	{
		cout<<root->data<<" "<<parent<<endl;
		return;
	}else
	{
		
		getParent(root->left,val,root->data);
		getParent(root->right,val,root->data);
		
		
	}
	
	
}

bool checkCousins(struct node*root,int x,int y){
	
//	int parentx=-1;
	
//	int parenty=-1;
    int parentx=-100;

    int parenty=-101;
	
	getParent(root,x,parentx);
	
	getParent(root,y,parenty);
	
	cout<<parentx<<" "<<parenty;
	
	if(parentx==parenty)
	{
	//	p1=parentx;
	//	p2=parenty;
		cout<<parentx<<" "<<parenty<<endl;
		return true;
	}
	else
	return false;
	
	
	
}

int main()
{
	
	struct node*root=new node(1);
	
	root->left=new node(2);
	
	root->right=new node(3);
	
	root->left->left=new node(4);
	
	cout<<checkCousins(root,3,4);
	
	cout<<endl;
	
	cout<<checkCousins(root,2,3);
	
}


// check why global and reference variables are not working properly???
