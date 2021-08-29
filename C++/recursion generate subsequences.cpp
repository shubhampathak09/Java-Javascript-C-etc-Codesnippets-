// geneate subsequence recursion

#include<bits/stdc++.h>
using namespace std;

int ct;

vector<string>result;



bool cmp(string s1,string s2)
{
	
	if(s1.length()==s2.length())
	{
		return s1<s2;
	}else
	{
		return s1.length()<s2.length();
	}
	
	
}

void subsequence(string in,string out){
	
	
	if(in.size()==0)
	{
	//	ct++;
	//	cout<<out<<endl;
		result.push_back(out);
		return;
	}
	
	string s=out;
	char x=in[0];
	in.erase(in.begin()+0);
	
	subsequence(in,out+x);
	subsequence(in,out);
	
}

int main()
{
	
	
	string in="abc";
	string out="";
	

subsequence(in,out);	
	
//	cout<<out+'a';
	
//	cout<<ct;

sort(result.begin(),result.end(),cmp);

for(auto x:result)
{
	cout<<x<<endl;
}

// or you can use set
}
