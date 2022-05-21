// reverse string method 2

// creeate
#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string ans;
	
	string temp="";
	
	stack<string>ss;
	
	
	string s="hello  world  ";
	
	for(int i=0;i<s.length();i++){
		
		if(s[i]==' '&&temp.size()>0){
			ss.push(temp);
			temp="";
			continue;
		}
		if(s[i]!=' '){
			temp.push_back(s[i]);
		}
	}
	if(temp.size()>0)
	ss.push(temp);
	
	
	while(!ss.empty()){
		
		ans+=ss.top();
		if(ss.size()!=1)
		ans+=" ";
		
		ss.pop();
		
	}
	
	cout<<ans;
	
}
