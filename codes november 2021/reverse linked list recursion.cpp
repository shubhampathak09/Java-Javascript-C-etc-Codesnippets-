// recursive reverse a linked list

#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node*next;
	node(int data){
		this->data=data;
		this->next=NULL;
	}
};


node*reverse(struct node*head){


if(head==NULL||head->next==NULL)
return head;

struct node* re=reverse(head->next);

head->next->next=head;
head->next=NULL;

return re;
	
}

int main()
{
	
	// create list
	
	struct node *head=new node(1);
	head->next=new node(2);
	head->next->next=new node(3);
	head->next->next->next=new node(4);
	
	struct node*temp=reverse(head);
	
	// inp 1 2 3 4
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	   }   //result 4 3 2 1
	
}
