#include<bits/stdc++.h>
using namespace std;


string rot13(string msg){
	
	string result =""; 
	
	for(char x : msg){
		
		if( (x >= 'a' && x <='z') || (x >='A' && x <='Z')){
			cout<<"character from string..."<<x<<endl;
			char nx = x + 13;
			cout<<nx<<" ";
			result += to_string(nx);
		}else
		{
			cout<<"character from string..."<<x<<endl;
			char nx = x;
			cout<<nx<<" ";
			result +=to_string(nx);
		}
		
	}
	
	return "";
}



int main()
{


//char c ='a';

//char b = c +13;


string testString ="test";


cout<<rot13(testString);

	
	
	
}
