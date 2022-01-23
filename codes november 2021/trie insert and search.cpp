// trie insert and search

#include<bits/stdc++.h>
using namespace std;


struct trie{
	
 struct trie*child[26];
	int isend;
	
	trie()
	{
		for(int i=0;i<26;i++)
		child[i]=NULL;
		
		isend=0;
		
	}
	
};

	struct trie *root;

void insert(string s,trie*root){
	 
	 trie*curr=root;
	
	
	for(auto x:s)
	{
		int index=x-'a';
		
		if(curr->child[index]==NULL)
		{
			curr->child[index]=new trie();
		}
		curr=curr->child[index];
	}
	curr->isend=1;
	
	
	curr->isend=true;
}

bool search(string s,trie*root){
	
	
	struct trie*curr=root;
	
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
	
    root=new trie();
	
	string dic[]={"cars","car","carseason","carpool","rat","lack","and"};
	
	
	for(auto x:dic){
		
	 //   cout<<x;	
		insert(x,root);
		
	}
	
	cout<<search("cars",root);
	
	
	cout<<search("magic",root);
	
	
	// nic always rember to intialize root=nnew trie();
}
