// Memory Efficient trie

#include<bits/stdc++.h>
using namespace std;


struct trie
{
map<char ,trie*>mp;

bool isend;

	
};


void insert(trie*root,string word){
	
	trie*curr=root;
	
	for(int i=0;i<word.length();i++)
	{
		
		char index=word[i];
		
		if(curr->mp.find(index)==curr->mp.end()){
			curr->mp[index]=new trie();
			
			
					}
					
					
		curr=curr->mp[index];
	}
	curr->isend=true;
	
}


bool search(trie*root,string word){
	
	
	trie*curr=root;
	
	for(int i=0;i<word.length();i++){
		if(curr->mp.find(word[i])==curr->mp.end()){
			return false;
		}
		curr=curr->mp[word[i]];
	}
	if(curr->isend==true){
		return true;
	}else
	return false;
	
}

int main()
{
	
	trie*root=new trie();
	
	string  dict[]={"apple","orange","pineapple","peach","pomegranate"};
	
	
	int n=sizeof(dict)/sizeof(dict[0]);
	
	
	for(auto x:dict){
		insert(root,x);
	}
	cout<<search(root,"orange")<<endl;
	
	cout<<search(root,"orangee")<<endl;
	
	cout<<search(root,"pineapple");
	
	
}
