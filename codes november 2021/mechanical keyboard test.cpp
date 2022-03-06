#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1="cat";
	
	string s2="cats";
	
	for(int i=0;i<min(s1.length(),s2.length());i++){
		
		cout<<s1[i]<<" "<<s2[i];
	}
}
