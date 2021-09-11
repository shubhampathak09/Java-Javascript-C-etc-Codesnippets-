// max occuruing word

#include<bits/stdc++.h>
using namespace std;

struct trie{

map<char,trie*>mp;
bool fq=0;
bool isend=false;
};


void insert(trie*root,string str){
	
	
	trie*curr=root;
	
	for(auto x:str){
		
		if(curr->mp.find(x)==curr->mp.end()){
			curr->mp[x]=new trie();
		}
		curr=curr->mp[x];
	}
	if(curr->isend==false){
		    
			curr->isend=true;
			curr->fq=curr->fq+1;
			
	}
    else
	curr->fq=curr->fq+1;
	
	cout<<curr->fq<<endl;
}


string ans="";
int ovfq=0;


void recur(trie*root,string res){
	
	if(root==NULL)
	{
		return;
	}
	
	if(root->isend==true){
		
		cout<<res<<" - "<<root->fq<<endl;
		if(root->fq>ovfq){
			ovfq=root->fq;
			ans=res;
			return;
		}
	}
	
	for(auto x:root->mp){
		res.push_back(x.first);
		recur(x.second,res);
		res.pop_back();
	//	recur(x.second,res+x.first);
	}
	
}

int main()
{
	
	trie*root=new trie();
	
	string keys[] = {"code", "coder", "coding", "codable", "codec", "codecs", "coded", "codeless", "codec", "codecs", "codependence", "codex", "codify", "codependents", "codes", "code", "coder", "codesign", "codec", "codeveloper", "codrive", "codec", "codecs", "codiscovered"};
	
	
	for(auto x:keys){
		insert(root,x);
	}
	
	string res="";
	
	recur(root,res);
	
	cout<<"Most occuring word is.."<<ans<<" "<<ovfq;
}



// fq not incementing need to check why??
