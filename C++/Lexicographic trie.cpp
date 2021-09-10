// Lexicograph String sort

#include<bits/stdc++.h>
using namespace std;

struct trie{
	
	trie*child[26];
	bool isend;
	trie(){
		for(int i=0;i<26;i++){
			this->child[i]=NULL;
		}
		isend=false;
	}
};




void insert(trie*root,string str){
	
	
	trie*curr=root;
	
	for(int i=0;i<str.length();i++)
	{
		int index=str[i]-'a';
		if(curr->child[index]==NULL){
			curr->child[index]=new trie();
		}
		curr=curr->child[index];
	}
	curr->isend=true;
}


void display(trie*root,string str){
	
	if(root->isend==true){
		cout<<str<<endl;
		
	}
	
	int i;
	
	for(i=0;i<26;i++)
	{
		if(root->child[i]!=NULL){
			str.push_back(i+'a');
			display(root->child[i],str);
			str.pop_back();
		}
	}
	return;
}

int main()
{
	
	// call display on dictionay of string
	
	trie*root=new trie();
	
	string words[]={};
	
	

   for(auto x:words){
   	insert(root,x);
   }
		
	string str="";
	
	display(root,str);
	
	//
	
	
}
