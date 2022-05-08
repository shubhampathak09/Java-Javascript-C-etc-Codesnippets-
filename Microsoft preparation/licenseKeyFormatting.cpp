// license key formmating
#include<bits/stdc++.h>
using namespace std;

string licenseKeyFormatting(string s, int k) {
     
	 
	 string ans="";
	 int cnt=0;
	 
	 for(int i=s.length()-1;i>=0;i--){
	 	
	 	if(s[i]!='-'){
	 		 if(cnt==k){
	 		 	ans+='-';
	 		 	cnt=0;
			  }
			  
		cnt++;
	 	if(s[i]>='a'&&s[i]<='z')
	 	{
	 		s[i]+='A'-'a';
		 }
	 	ans+=s[i];
		 }
	 	
	 	
	 	
	 }
	    reverse(ans.begin(),ans.end());
	    
	    return ans;
    }
    
    int main(){
    	
    	
    	string S = "5F3Z-2e-9-w";
		 int K = 4;
		 
		 cout<<licenseKeyFormatting(S,K);
    	
	}
