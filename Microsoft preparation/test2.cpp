#include<bits/stdc++.h>
using namespace std;

int main(){
	
	
	string s="cdcfvfv";
	
	
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>='a'&&s[i]<='z'){
			s[i]+='A'-'a';
		}
	}
	cout<<s;
}
