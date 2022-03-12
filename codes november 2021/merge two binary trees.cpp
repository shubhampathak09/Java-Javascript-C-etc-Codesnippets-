// Merge two binary trees

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


struct node*merge(struct node*t1,struct node*t2){
	
if(t1==NULL)
return t2;

if(t2==NULL)
return t1;


t1->data+=t2->data;
merge(t1->left,t2->left);
merge(t1->right,t2->right);	
	
return t1;	
}


int main(){
	
	struct node t1=new node(1);
	t1->left=new node(3);
	t1->right=new node(2);
	t1->left->left=new node(5);
	
	
	struct node t2=new node(2);
	t2->left=new node(1);
	//t2->r
	
	
	
	
}
