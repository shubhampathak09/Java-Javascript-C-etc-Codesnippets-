#include<bits/stdc++.h>
using namespace std;

struct TrieNode{
	struct TrieNode* children[26];
	bool isend;
	
	TrieNode(){
		for(int i=0;i<26;i++){
			this->children[i]=NULL;
		}
		this->isend=false;
	}
	
};


bool startsWith(string prefix,TrieNode*root){
	
	TrieNode*curr=root;
	
	string cr="";
	for(int i=0;i<prefix.length();i++){
		
		int index=prefix[i]-'a';
		
		if(curr->children[index]==NULL)
		return false;
		
		curr=curr->children[index];
	}
	
	return true;
}

void insert(TrieNode*root,string key){
	
	TrieNode*curr=root;
	
	for(int i=0;i<key.length();i++)
	{
		int index=key[i]-'a';
		if(curr->children[index]==NULL){
			curr->children[index]=new TrieNode();
		}
		curr=curr->children[index];
	}
	curr->isend=true;
}


bool search(TrieNode*root,string word){
	
	TrieNode*curr=root;
	
	for(int i=0;i<word.size();i++){
		int index=word[i]-'a';
		if(curr->children[index]==NULL)
		{
			return false;
		}
		curr=curr->children[index];
	}
	
	return curr->isend;
}

int main(){
	
	string word[]={"ate","apple","ape","ass","alien"};
	
	TrieNode *root=new TrieNode();
//	root=NULL;
	for(auto x:word){
		insert(root,x);
	}
	
	
	cout<<search(root,"ass");
	
	cout<<search(root,"boobs");
	
	cout<<search(root,"aliens");
	
	cout<<search(root,"alien");
	
	cout<<endl;
	
	cout<<startsWith("alie",root);
	
	cout<<startsWith("ally",root);
}
