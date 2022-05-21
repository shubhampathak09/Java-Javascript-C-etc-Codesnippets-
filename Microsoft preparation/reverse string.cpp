// reverse words in a string

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	
//	string s="the sky is blue";
	
	/*
	string ans="";
	string curr="";
	int first=0;
	int second=0;
	
	for(int i=0;i<s.length();i++){
		if(s[i]!=' '){
			curr+=s[i];
		}else
		{
	       //second=i;
		    reverse(curr.begin(),curr.end());
			ans+=curr;
			ans+=" ";
			curr="";		
		}
	}
	reverse(curr.begin(),curr.end());
	ans+=curr;
	
	reverse(ans.begin(),ans.end());
	
	
	cout<<ans;
	*/
	
	
	string s="hello  world";
	
	stack<string>st;
	
	string temp="";
	
	for(int i=0;i<s.length();i++){
		
		if(s[i]=' '&& temp.size()>0)
		{
			st.push(temp);
			temp="";
			continue;
		}
		if(s[i]!=' '){
			temp.push_back(s[i]);
		}
	}
	if(temp.size()>0)
	st.push(temp);
	
	
	string ans;
	
	
	while(!st.empty()){
		string tp=st.top();
		ans+=tp;
		if(st.size()!=1)
		ans+=" ";
		
		st.pop();
			}
	
	cout<<ans;
}
