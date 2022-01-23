// trie insert and search

#include<bits/stdc++.h>
using namespace std;


struct trie{
	
	bool isend;
	trie *child[26];
	
	trie(){
		
		
		for(int i=0;i<26;i++)
		child[i]=NULL;
	}
	
	
};

void insert(string s,trie*root){
	
	trie*curr=root;
	
	for(int i=0;i<s.length();i++){
		
		int index=s[i]-'a';
		if(curr->child[i]==NULL){
			curr->child[i]=new trie();
		}
		curr=curr->child[i];
	}
	
	curr->isend=true;
}

bool search(string s,trie*root){
	
	
	struct node*curr=root;
	
	for(int i=0;i<s.length();i++){
		
		int index=s[i]-'a';
		
		if(curr->child[index]==NULL){
			return false;
		}
		curr=curr->child[index];
		
	}
	
	return curr->isend==true;
}


int main()
{
	
	
	
}
