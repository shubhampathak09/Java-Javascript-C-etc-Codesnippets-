// check if s2 is subset  of s1

#include<bits/stdc++.h>
using namespace std;

int  main()
{
	
	string s1="codingminutes";
	string s2="cines";
	
	bool flag=true;
	
	int s1_start=0;
	
	int s2_start=0;
	
	int s1_end=s1.length()-1;
	
	int s2_end=s2.length()-1;
	
	
	while(s2_start<=s2_end)
	{
		
		if(s2[s2_end]==s1[s1_end])
		{
			s2_end--;
			s1_end--;
		}
		else
		{
			s1_end--;
		}
		
	
	}
	
	if(s2_end>=0)
	{
		cout<<"no match";
		return 0;
	}
	
	    else
		cout<<"subset found";
	
	
}
