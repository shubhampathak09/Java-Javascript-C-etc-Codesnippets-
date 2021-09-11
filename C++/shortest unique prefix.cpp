// Shortes Unique Pefix

#include<bits/stdc++.h>
using namespace std;


struct trie{
	
	map<char,trie*>mp;
	int fq=0;
	string wr;
};



void insert(trie*root,string str){
	
	trie*curr=root;
	
	for(int i=0;i<str.length();i++)
	{
		if(curr->mp.find(str[i])==curr->mp.end()){
			curr->mp[str[i]]=new trie();
		}
		curr=curr->mp[str[i]];
		curr->fq++;
		curr->wr=str;
	}
	
}


void printShortestUniquePrefix(trie*root,string word){
	
	
	if(root==NULL)
	{
		return;
	}
	
	if(root->fq==1){
		cout<<"Shortest unique prefix for the word # "<<root->wr<<" "<<word<<endl;
		return;
	}

for(auto child:root->mp){
	
	printShortestUniquePrefix(child.second,word+child.first);
	
}	
}

int main()
{
	
	trie*root=new trie();
	
	vector<string>words={"AND","BOOL","BONFIRE","CATCH","CASE","CHAR"};
	
	
	
	
	for(auto x:words){
		insert(root,x);
	}
	
	string word="";
	
	printShortestUniquePrefix(root,word);
}
