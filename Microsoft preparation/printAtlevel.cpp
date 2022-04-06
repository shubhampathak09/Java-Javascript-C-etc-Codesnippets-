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

vector<vector<int>>ans;

int height(struct node*root){
	
	if(root==NULL)
	return 1;
	
	int lh=height(root->left);
	int rh=height(root->right);
	
	if(lh>rh)
	return 1+lh;
	else
	return 1+rh;
}



void printAtLevel(struct node*root,int level,vector<int>result){
	
	if(level==1)
	{
		if(root!=NULL){
			
		result.push_back(root->data);

		cout<<root->data<<" ";
		return;
	}else
	return;
	}
	if(level%2!=0){
	
	printAtLevel(root->left,level-1,result);
	printAtLevel(root->right,level-1,result);
}
else
{
		printAtLevel(root->right,level-1,result);
	printAtLevel(root->left,level-1,result);
}
}
            /*  1
             2 3
			4   5

*/
void printNodes(struct node*root){
	
	

	
	int level=height(root);
	
	for(int i=1;i<=level;i++){
		
		vector<int>result;
		printAtLevel(root,i,result);
		ans.push_back(result);
		cout<<endl;
	}
	
}


int main(){
	
	
	struct node*root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	root->left->left=new node(4);
	root->right->right=new node(5);	
	
	
	printNodes(root);
	
	cout<<"printing the contents..";
	cout<<endl;
	
	for(int i=0;i<ans.size();i++){
		
		for(int j=0;j<ans[i].size();j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	// shit gg
	
}
