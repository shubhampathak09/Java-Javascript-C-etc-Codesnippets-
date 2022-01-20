// binary number to decimal

#include<bits/stdc++.h>
using namespace std;


int binaryDec(int n)
{
	
	string s=to_string(n);
	cout<<s;
	
//	reverse(s.begin(),s.end());
	
	int res=0;
    
	int len=s.length(); 	
    for(int i=0;i<len;i++){
    	
    	res+= pow(2,len-1-i)*(s[i]-'0');
	}
		
	
	return res;	
	}
	


	

int main()
{
	
	int a=101;
	
	int ans=binaryDec(a);
     
    cout<<ans; 
}
