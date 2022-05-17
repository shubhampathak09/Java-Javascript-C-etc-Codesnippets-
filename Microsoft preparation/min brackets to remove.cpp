
/*
MIN REMOVE TO MAKE BALANCED 


stack<int> ms;

for(int i=0;i<s.length;i++){
	
	char ch=s[i];
	
	if(ch=='(')
	{
		 ms.push(ch);
	}else if( ch ==')'){
		if(!ms.empty()){
			ms.pop();
		}else
		{
			s[i]='?';
		}
	}
	
	
	while(!ms.empty()){
		s[ms.top()]='?';
		ms.pop();
	}
	
	
	// remove space from string
	
	s.earse(remove(s.begin(),s.end(),'?'),s.end());
	
}
*/


#include<bits/stdc++.h>
using namespace std;


int main(){
	
	
	string sample="lee(t(c)o)de)";
	stack<int> s;
	
	
	for(int i=0;i<sample.length();i++){
		
		if(sample[i]=='('){
			s.push(i); // pushes index
		}else if(sample[i]==')'){
			if(!s.empty()){
				s.pop();
			}else
			{
				sample[i]='?';  // when start wtij )))
			}
		}
	}
	
	
	while(!s.empty()){
		
		sample[s.top()]='?';
		s.pop();
	}
	
	
	sample.erase(remove(sample.begin(),sample.end(),'?'),sample.end());
	
	cout<<sample;
	
}
