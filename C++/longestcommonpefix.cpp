//longest common prefix

#include<bits/stdc++.h>
using namespace std;


struct trie{
	bool isend;
	
	struct trie*child[26];
	
	trie(){
		for(int i=0;i<26;i++){
			this->child[i]=NULL;
		}
		isend=false;
	}
};


void insert(trie*root,string word){
//	cout<<1;
	
	trie*curr=root;
	
	for(int i=0;i<word.length();i++){
		int index=word[i]-'a';
		
		if(curr->child[index]==NULL){
			curr->child[index]=new trie();
		}
		curr=curr->child[index];
	}
//	cout<<"inserted into trie"<<endl;
	curr->isend=true;
}

int countChild(trie*root){
	
	int ct=0;
	
	for(int i=0;i<26;i++){
		if(root->child[i]!=NULL)
		ct++;
	}
	return ct;
}

string longestCommonPrefix(trie*root,string prefix){
	
	trie*curr=root;
	
	
	
	while(countChild(curr)==1){
		
//		cout<<"start..";
		for(int i=0;i<26;i++)
		{
			if(curr->child[i]!=NULL)
			{
//				cout<<i+'a'<<endl;
				prefix+=(i+'a');
				curr=curr->child[i];
				break;
			}
		}
		
	}
	
	return prefix;
}
int main()
{


struct trie*root=new trie();


 string arr[] = {"geeksforgeeks", "geeks",
                    "geek", "geezer"};


int n=sizeof(arr)/sizeof(arr[0]);


for(int i=0;i<n;i++)
{
//	cout<<arr[i]<<endl;
	insert(root,arr[i]);
}


string prefix="";

cout<<"longest common prefix is.."<<longestCommonPrefix(root,prefix);
	
}

