// word ladder
#include<bits/stdc++.h>
using namespace std;

int solve()
{

	
	
	vector<string>dict={"poon","plee","poie","plea","plie","poin"};
	
	
	set<string>ss;
	
	for(string s:dict){
		ss.insert(s);
	}
	
	queue<pair<string,int>>q;
	
	string start="toon";
	
	string ends="plea";
	
	q.push({start,0});
	
	int level=0;
	
	while(!q.empty()){
		
	//	cout<<1;
		
		int n=q.size();
		
	//	cout<<n;
		
		for(int i=1;i<=n;i++){
			
			
			auto curr=q.front();
			
			string curword=curr.first;
			int depth=curr.second;
			
			
			q.pop();
			
			
			
			if(curword==ends){
				
				cout<<curr.second;
				return curr.second;
				
			}
			
			for(int i=0;i<curword.length();i++){
				
				string formword=curword;
				
				for(char x='a';x<='z';x++){
					
					formword[i]=x;
					
					if(ss.find(formword)!=ss.end()){
						
						q.push({formword,depth+1});
						ss.erase(formword);
						
					}
				}
				
			}
			
		}
		
		
	}
	
	return -1;
	
	
	
}




/*
void generateWord(string s){
	
	int count=0;
//	string old=s;
	
	for(int i=0;i<s.length();i++){
		
		string change=s;
		
		for(char x='a';x<='z';x++){
		
		change[i]=x;
		
		cout<<change<<endl;;
			
		}
		cout<<"end.."<<endl;
		
	}
	
	return;
}
*/
int main(){
//	generateWord("cat");
	
	int ans=solve();


	
	
//	cout<<ans;
	
}
