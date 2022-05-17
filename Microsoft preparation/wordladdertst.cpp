#include<bits/stdc++.h>
using namespace std;


int shortestChain(string start,string target,set<string>&D){
	
	
	if(start==target)
	return 0;
	
	if(D.find(target)==D.end())
	return 0;
	
	
	int lev=0;
	
	int n=start.size();
	
	queue<string>q;
	
	q.push(start);
	
	
	while(!q.empty()){
		
		++lev;
		
		int sz=q.size();
		
		for(int i=0;i<sz;i++){
			
			
			string word=q.front();
			q.pop();
			
			for(int pos=0;pos<word.length();pos++){
				
				char orig=word[pos];
				
				
				for(char c='a';c<='z';c++){
					word[pos]=c;
					
					
					if(word==target)
					return lev+1;
					
					
					if(D.find(word)==D.end())
					continue;
					
					D.erase(word);
					
					q.push(word);
				}
				word[pos]=orig;
			}
		}
		
	}
	
}

int main(){
	
	
	set<string>D;
	
	D.insert("poon");
	D.insert("plee");
	D.insert("same");
	D.insert("poie");
	D.insert("plie");
	D.insert("poin");
	D.insert("plea");
	
	string start="toon";
	
	string end="plea";
	
	
	cout<<shortestChain(start,end,D);
	
	return 0;
}
