// reverse a linked  list

#include<bits/stdc++.h>
using namespace std;


struct node{
	int data;
    struct node*next;
    
    node(int data){
    	this->data=data;
    	this->next=NULL;
	}
};


struct node*reverse(struct node*head){
	
	struct node*prev=NULL;
	struct node*curr=head;
	struct node*temp=NULL;
	  //       temp 
    	// 1->2->3->4->5
	   
	while(curr!=NULL){
		
	temp=curr->next;	
		
	curr->next=prev;
	
	prev=curr;
	
	curr=temp;	
	}
	
	return prev;
}

int main(){
	
	struct node*head=new node(1);
	
	head->next=new node(2);
	
	head->next->next=new node(3);
	
	head->next->next->next=new node(4);
	
	head=reverse(head);
	
	
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
	
	
	//test


// problems to practise
// rotate a linked list
// add 1 to linked list
// add 2 numbers rep by linked listed
// check if ll is palindrome
//clone a linked list
//recover a bst
// reverse in k pair
// merrge k sorted linked lists
// insertion sort linked list
// merge sort linked list

	
}
