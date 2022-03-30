#include<bits/stdc++.h>
using namespace std;


bool isIdenntic


int main(){
	
	
	
	


}



/// delete leave nodes with x


root->left=delte(root->left,x);
root->right=delete(root->right,x);

if(root->left==NULL&&root->right==NULL&&root->data==x)
return null;

delete(root,x);  // mistake

return root;


// max depth



int maxdepth(struct node*root){
	
	
	
	if(root==NULL)
	return 0;
	
	
	int mx=0;
	
	
	
	queue<node*>q;
	
	q.push(node);
	
	
	while(!q.empty()){
		
		int n=q.size();
		
		mx=max(mx,n);
		
		for(int i=1;i<=n;i++){
			
			Node *n=q.front();
			q.pop();
			
			if(n->left)
			{
				q.push(n->left);
				
			}
			if(n->right)
			{
				q.push(n->right);
			}
		}
		
	}
	
	cout<<mx;   // max woidtgh
 }

