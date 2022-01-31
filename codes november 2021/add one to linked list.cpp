// Add 1 to  linked list
// 11-01-2022

// damn 9 yrs from now  11-01-2031 
#include<bits/stdc++.h>
using namespace std;


struct node{

int data;
struct node*next;

node(int data){
	this->data=data;
	this->next=NULL; 
}

node(){
	
}	
};


node *n =new node();

struct node*reverse(struct node*node){
	
	if(node==NULL||node->next==NULL){
		return node;
	}
	
	n=reverse(node->next);
     
    node->next->next=node;
	
	node->next=NULL;

	
	return n;
	 	
}


struct node* addoneu(struct node*node){


int carry=1;
int sum=0;

struct node*res=node;

struct node*temp,*prev=NULL;


while(node!=NULL){
	
	
	sum=carry+node ? node->data :0;
	carry=sum/10;
	sum=sum%10;
	node->data=sum;
	
	temp=node;
	node=node->next;
	
	
}

if(carry!=0)
temp->next=new struct node(carry);


return res;

}

struct node* addone(struct node*node){
	
	node=reverse(node);
	
	node=addoneu(node);
	
	return node;
	
}

int main()
{
	// creARE a ll
	
	// check before impl type specifiers dont seem to be correct
	// athough logic is correct
	
	
	
}
