// Longest balanced paranthesis

#include<bits/stdc++.h>
using namespace std;


int longestLength(string s){
	
	
	stack<int>st;
	st.push(-1);
	
	int res=0;
	
	for(int i=0;i<s.length();i++){
		
		if(s[i]=='(')
		{
			
			st.push(i);
			
		}else
		{
			
			if(!s.empty())
				
				
				st.pop();
				
				
				if(!st.empty()){
					
					res=max(res,i-st.top());
					
				}else
				{
					st.push(i);
				}
				
			}
			
		
		
	}
	
	
	return res;
	
}

int main()
{
	
	
	string s=")()(())";
	
	
	cout<<longestLength(s);
}
