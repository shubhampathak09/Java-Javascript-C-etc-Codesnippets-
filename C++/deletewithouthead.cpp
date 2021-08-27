#include<bits/stdc++.h>
using namespace std;


struct node
{
	int data;
	struct node*next;
	node(int data)
	{
		this->data=data;
		this->next=NULL;
	}
};

//1 2 3 

//5 5 6 7 8
void deltenode(struct node *pos)
{
	if(pos==NULL)
	return;
	
	struct node*temp=pos->next;
	
	pos->data=pos->next->data;
	
	pos->next=temp->next;
	
	
	free(temp);
}


void printnode(struct node*node)
{
	struct node *temp=node;
	
	while(temp!=NULL)
	{
		
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	
}

int main()
{
	
	
	struct node*head=new node(1);
	
	head->next=new node(2);
	
	head->next->next=new node(3);
	
	head->next->next->next=new node(4);
	
	head->next->next->next->next=new node(5);
	
	head->next->next->next->next->next=new node(6);
	
	printnode(head);
	
	cout<<endl;
	
	deltenode(head->next->next);
	
	printnode(head);
	
}
