#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node*next;
//	struct node*right;
	node(int data){
		 this->data=data;
		 this->next=NULL;
	}
};

struct node*getMiddle(node*list1){
	
	struct node*slow=list1;
	struct node*fast=list1;
	struct node*temp=list1;
	
	while(fast!=NULL&&fast->next!=NULL){
		temp=slow;
		slow=slow->next;
		fast=fast->next->next;
	}
	
	temp->next=NULL;
	
	return slow;
	
}

struct node*mergeTwo(node*l1,node*l2){
	
	if(l1==NULL)
	return l2;
	else if(l2==NULL)
	return l1;
	
	node*res=NULL;
	if(l1->data<=l2->data){
		res=l1;
		res->next=mergeTwo(l1->next,l2);
	}
	else{
		res=l2;
		res->next=mergeTwo(l1,l2->next);
	}
	
	return res;
}

struct node*mergesort(struct node*list1){
	
	if(list1==NULL||list1->next==NULL)
	return list1;
	
   struct node*middle=getMiddle(list1);
   struct node*l1=mergesort(list1);
   struct node*l2=mergesort(middle);
   
   return mergeTwo(l1,l2);	
} 

int main(){
	
	struct node*list=new node(4);
	list->next=new node(5);
	list->next->next=new node(1);
	
	list->next->next->next=new node(2);
	list->next->next->next->next=new node(12);
	
	node*m=getMiddle(list);
	
	cout<<m->data;
	
	struct node*res=mergesort(list);
    
    while(res!=NULL)
    {
    	cout<<res->data<<" ";
    	res=res->next;
    	
	}
 }
