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

int main()
{
	
	
	struct trie*root=new trie();
	
	
	insert(root,"apple");
	
	insert(root,"apricot");
	
	
	cout<<search(root,"apple");
	
	cout<<endl;
	
	cout<<search(root,"apric");
}
