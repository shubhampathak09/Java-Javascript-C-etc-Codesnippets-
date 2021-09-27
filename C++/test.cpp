#include<bits/stdc++.h>
using namespace std;
 


void insert(stack<int>&s,int x){
	
	
	if(s.size()==0||s.top()<x){
		s.push(x);
		return;
	}
	
	int k=s.top();
	s.pop();
	insert(s,x);
	s.push(k);
}


void sortstack(stack<int>&s){
	
	
	if(s.size()==0){
		
		return;
		
	}
	
	int x=s.top();
	s.pop();
	
	sortstack(s);
	insert(s,x);
	
}

int main()
{
	
	stack<int>s;
	
	s.push(12);
	s.push(10);
	
	s.push(2);
	
	s.push(8);
	
	s.push(16);
	
	
	s.push(0);
	
	
	sortstack(s);
	
	while(!s.empty()){
		
		cout<<s.top();
		s.pop();
		cout<<endl;
	}
}
