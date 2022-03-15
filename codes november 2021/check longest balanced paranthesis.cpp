// check longest balanced paraenthesis brute force appraich

#include<bits/stdc++.h>
using namespace std;


bool check(string s){
	
	
	int n=s.length();
	
//	stack<int>ss;
	
	
	 stack<char>ss;
	
	for(int i=0;i<s.length();i++){
		
		if(s[i]=='('||s[i]=='['||s[i]=='{'){
			
			ss.push(s[i]);
			
		}else
		{
			
			if(ss.size()==0){
				
		//		cout<<"invalid string";
				return 0;
				
			}
			else
			{
				
				char x=ss.top();
				ss.pop();
				
				
			    if(x=='('){
			    	
			    	if(s[i]=='['||s[i]=='{')
			    	{
			  //  		cout<<"Not valid string";
			    		return 0;
					}
			    	else 
			    	continue;
			    	
				}
				else if(x=='{'){
					
					
					if(s[i]==']'||s[i]==')'){
						
			//				cout<<"Not valid string";
			    		return 0;
					}else
					continue;
				}
				else
				{
					if(s[i]=='}'||s[i]==')'){
			//				cout<<"Not valid string";
			    		return 0;
					}else
					continue;
				}
				
			}
			
			
		}
	
}


return 1;
}
int main()
{
	
	string str=")()()(";
	

 //   string str="abc";
	
	int mx=INT_MIN;
	
	
	int n=str.length();
	
	for(int i=0;i<n;i++){
		
		
		for(int j=i+1;j<n+1;j++){
			
			string sub=str.substr(i,j-i);
			cout<<sub;
			int cur=sub.length();
		//	cout<<sub.length()<<endl;
			
			if(check(sub)){
				
				cout<<sub<<endl;
				
				mx=max(mx,cur);
				
			}
			
		}
		
	}
	
	 cout<<mx;
}


// check substring is valid or not

