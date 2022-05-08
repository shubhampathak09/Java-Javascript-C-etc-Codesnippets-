#include<bits/stdc++.h>
using namespace std;

int main(){
	
	vector<string> emails
        = {"a@leetcode.com","b@leetcode.com","c@leetcode.com"};
	
	
	for(string &s:emails){
		
		
		auto pos=s.find('@');
		
		if(pos<s.size()){
			
			
			s.erase(remove(s.begin(),s.begin()+pos,'.'),s.begin()+pos);
			
			auto pos1=s.find('+');
			
			
			pos=s.find('@');
			
			
			if(pos1<s.size()&&pos<s.size()){
				
				s.erase(pos1,pos-pos1);
			}
		}
		
	}
	
	set<string>ss;
	
	
	for(auto x:emails){
		ss.insert(x);
	}
	
	cout<<ss.size();
}
