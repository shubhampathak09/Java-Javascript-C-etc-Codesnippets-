#include<bits/stdc++.h>
using namespace std;


vector<string>addWord(string word,set<string>&dict){
	
	vector<string>res;
	string temp=word;
	
	for(int i=0;i<word.length();i++){
		
	
		for(int j='a';j<='z';j++)
{
	       temp[i]=j;
	       cout<<temp<<endl;
	       if(dict.find(temp)!=dict.end()){
	       	res.push_back(temp);
		   }
		}
			 temp=word;		
	}
	
	for(auto x:res)
	{
		cout<<x<<endl;
	}
	
	return res;
}

int main(){
	
	 vector<string> word= { "ted", "tex", "red", "tax", "tad", "den", "rex", "pee"};
	
	set<string> dict(word.begin(),word.end());
	
	addWord("red",dict);	
}
