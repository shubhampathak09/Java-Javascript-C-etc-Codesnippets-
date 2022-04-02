// recover BST
// objective should be to get good in programming in general
// no tension only tought process
// cantor set problem most efficient wAY TO SOLVE THIS




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


void correctBST(struct node*&root,struct node*&first,struct node*&middle,struct node*&last,struct node*&prev){
	
	
	if(root){
		
		
	correctBST(root->left,first,middle,last,prev);	
		
	if(prev!=NULL &&root->data<prev->data){
		
		if(!first){
			
			first=prev;
			middle=root;
			
		}else{
			
			last=root;
			
		}
		
		
	}
	prev=root;	
	
	correctBST(root->right,first,middle,last,prev);
		
	}
	
	
}

void inorder(struct node*root){
	
	if(root==NULL)
	return;
	
	inorder(root->left);
	
	cout<<root->data<<" ";
	
	inorder(root->right);
	
	
}

 

int main(){
	

struct node*first=NULL;
struct node*middle=NULL;
struct node*last=NULL;
struct node*prev=NULL;

struct node*root=new node(1);

root->left=new node(3);

inorder(root);
	
correctBST(root,first,middle,last,prev);	


if(first&&last){
	
	swap(first->data,last->data);
	
}else if(first&&middle){
	swap(first->data,middle->data);
}

cout<<"\nAfter swaping..\n";	
	
inorder(root);	
}



/*  kata get nth node in linked list  basic recursion  approach
 public static int getNth(Node n, int index) throws Exception{
    // WORK HERE
    
    if(index==0)
      return n.data;
    
    Node curr=n;
    curr=curr.next;
    
    return getNth(curr,index-1);
  }
}
*/
