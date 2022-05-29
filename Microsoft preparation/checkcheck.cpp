// check if list subsequennce exisits

#include<bits/stdc++.h>
using namespace std;

bool isSub(string s,string w){
	
	if(s.length()>w.length())
	return false;
	
	
	int i=0;
	int j=0;
	
	while(j<w.length()){
		
		if(s[i]==w[j]){
			i++;
		}
		if(i==s.length())
		return true;
		
		j++;
	}
	
	return false;
}

int main(){
	
	
	string s="abcde";
	
	vector<string>words={"a","bb","acd","ace"};
	
     
	 
	 map<string,int>mp;
	 
	 int ct=0;
	 
	 for(int i=0;i<words.size();i++){
	 	
	 	
	 	if(mp.find(words[i])==mp.end()){
	 		mp[words[i]]=isSub(words[i],s);
		 }
	 	
	 	if(mp.find(words[i])!=mp.end()){
	 		ct+=mp[words[i]];
			 		 }
		 		 
	 }
	 	
	 	cout<<ct;
	 	
//	cout<<isSub("de","abcde");
	
		
}
