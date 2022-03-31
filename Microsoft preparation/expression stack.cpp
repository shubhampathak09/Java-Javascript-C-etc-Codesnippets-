#include<bits/stdc++.h>
using namespace std;


int apply(int val1,int val2,char ops){
	
	if(ops=='+')
		return val1+val2;
		
		else if(ops=='-')
		return val1-val2;
		
		else if(ops=='*')
		return val1*val2;
		
		else
		return val1/val2;
	
	
	
}

int precedence(char ops){
	
	
	if(ops=='*'||ops=='/')
	return 2;
	else if(ops=='+'||ops=='-')
	return 1;
	else
	return 0;
}

int main()
{
	
	string s="12+3-2";
	
	stack<int>num;
	stack<char>op;
	for(int i=0;i<s.length();i++){
		
		
		if(isdigit(s[i])){
			
			
			int val=0;
			
			while(i<s.length()&&isdigit(s[i])){
				
				val=val*10+s[i]-'0';
		        
				i++;		
			}
			num.push(val);
		}
		else if(s[i]=='+'||s[i]=='*'||s[i]=='-'||s[i]=='/'){
			
			
			while(!op.empty()&&precedence(op.top())>=precedence(s[i])){
				
				
				// evalute
				
				int val2 = num.top();
				
				num.pop();
				
				int val1=num.top();
				
				num.pop();
				
				char ops=op.top();
				
				int val=apply(val1,val2,ops);
				
				op.pop();
				
			//	cout<<val<<endl;
				
				num.push(val);
				
			}
			
			op.push(s[i]);
		}
	}
	
	while(!op.empty()){
		
		
		int val2=num.top();
		num.pop();
		int val1=num.top();
		num.pop();
		
		char ops=op.top();
		
		op.pop();
		
		int val=apply(val2,val1,ops);
		
		num.push(val);		
	}
	
	cout<<num.top();
	
	
//	cout<<num.size();
//	while(!num.empty()){
//		
//		cout<<num.top()<<" ";
//		num.pop();
//	}
	
}
