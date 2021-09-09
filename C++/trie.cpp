#include<bits/stdc++.h>
using namespace std;

struct trie{
	struct trie*child[26];
	bool isleaf;
	
    trie()
    {
    	
    	for(int i=0;i<26;i++){
    		this->child[i]=NULL;
		}
		isleaf=false;
    	
	}
	
};

void insert(struct trie*root,string str)
{
	
	struct trie*curr=root;
	
	
	for(int i=0;i<str.length();i++)
	{
		int index=str[i]-'a';
		
		if(curr->child[index]==NULL){
		curr->child[index]=new trie();
		
		}
		curr=curr->child[index];
	}
	curr->isleaf=true;
}

bool search(struct trie*root,string str){
	
	struct trie*curr=root;
	
	
	for(int i=0;i<str.length();i++)
	{
		int index=str[i]-'a';
		
		
		if(curr->child[index]==NULL)
		{
			return false;
		}
		curr=curr->child[index];
	}
	
	return curr->isleaf==true;
}

int hasChildren(trie*root){
	
	for(int i=0;i<26;i++)
	{
		if(root->child[i])
		return 1;
	}
	return 0;
	
}



trie*remove(trie*root,string key,int depth){
	if(root==NULL)
	return NULL;
	
	
	if(depth==key.size()){
		
		
		if(root->isleaf==true){
			root->isleaf=false;
		}
		if(hasChildren(root)==false){
			delete(root);
			root=NULL;
		}
		
		return root;
	}
	
	
	
	int index=key[depth]-'a';
	root->child[index]=remove(root->child[index],key,depth+1);
	
	
	if(hasChildren(root)&&root->isleaf==false)
	{
		delete(root);
		root=NULL;
	}
	
	return root;
}


// deletion bottom up 




// write logic above

int main()
{
	
	
	struct trie*root=new trie();
	
	
	insert(root,"apple");
	
	insert(root,"apricot");
	
	
	cout<<search(root,"apple");
	
	cout<<endl;
	
	cout<<search(root,"apric");
}
