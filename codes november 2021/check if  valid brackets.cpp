// check if expression is valid

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	
	string s= "([{}])";
	
	stack<char>ss;
	
	for(int i=0;i<s.length();i++){
		
		if(s[i]=='('||s[i]=='['||s[i]=='{'){
			
			ss.push(s[i]);
			
		}else
		{
			
			if(ss.size()==0){
				
				cout<<"invalid string";
				return 0;
				
			}
			else
			{
				
				char x=ss.top();
				ss.pop();
				
				
			    if(x=='('){
			    	
			    	if(s[i]=='['||s[i]=='{')
			    	{
			    		cout<<"Not valid string";
			    		return 0;
					}
			    	else 
			    	continue;
			    	
				}
				else if(x=='{'){
					
					
					if(s[i]==']'||s[i]==')'){
						
							cout<<"Not valid string";
			    		return 0;
					}else
					continue;
				}
				else
				{
					if(s[i]=='}'||s[i]==')'){
							cout<<"Not valid string";
			    		return 0;
					}else
					continue;
				}
				
			}
			
			
		}
		
	}
	
	if(ss.empty()==false){
		
		cout<<"not valid";
		return 0;
		
	}
	
	cout<<"valid";
	return 1;
}
