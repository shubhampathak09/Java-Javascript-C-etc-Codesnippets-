#include<bits/stdc++.h>
using namespace std;


void insert(stack<int>s,int x){
	
	
	if(s.size()==0||s.top()<x){
		s.push(x);
		return;
	}
	
	int k=s.top();
	s.pop();
	insert(s,x);
	s.push(k);
}


void sortstack(stack<int>s){
	
	
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
	
	cout<<"hello";
}
