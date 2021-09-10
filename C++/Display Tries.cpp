#include<bits/stdc++.h>
using namespace std;

struct trie{
	bool isleaf;
	trie*child[26];
	trie(){
	
	for(int i=0;i<26;i++)
	{
		child[i]=NULL;
	}
	isleaf=false;
	}
};

void insert(trie*root,string word){
	
	trie*curr=root;
	
	for(int i=0;i<word.length();i++){
		int index=word[i]-'a';
		if(curr->child[index]==NULL){
			curr->child[index]=new trie();
		}
		curr=curr->child[index];
	}
	curr->isleaf=true;
}


void display(trie*root,string str){
	
	
	if(root->isleaf){
		cout<<str<<" ";
		cout<<endl;
 
	}
	int i;
	
	for(i=0;i<26;i++){
		if(root->child[i]){
			str.push_back(i+'a');
			display(root->child[i],str);
			str.pop_back(); /// why this 
		}
	}
	
	return;
	
}

int main()
{
	
trie*root=new trie();	
	
	string wordset[]={"genius","india","apples","applepie","make","shake","fake","apple"};
	
	
	for(auto x:wordset){
		insert(root,x);
	}
	
	string str="";
	
	display(root,str);
	
}


// Interesting Problem
