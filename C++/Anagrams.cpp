/*Given two strings a and b consisting of lowercase characters. The task is to check whether two given strings are an anagram of each other or not. An anagram of a string is another string that contains the same characters, only the order of characters can be different. For example, “act” and “tac” are an anagram of each other.
*/


#include<bits/stdc++.h>
using namespace std;

bool checkAnagrams(string s1,string s2)
{
	
	sort(s2.begin(),s2.end());
	sort(s1.begin(),s1.end());
	
	return s1==s2;
	
}

int main()
{
	
	
	string s1="geeksforgeeks";
	string s2="forgeeksgeeks";
	cout<<checkAnagrams(s1,s2);
	cout<<endl;
	cout<<checkAnagrams("allergy","allergic");
	
	
}
