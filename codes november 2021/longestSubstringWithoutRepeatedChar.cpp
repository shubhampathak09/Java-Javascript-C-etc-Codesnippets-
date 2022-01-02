#include<bits/stdc++.h>
using namespace std;


void  longestSubstringWithoutRepeatingChar(string s){
	
	
	int i=-1;
	int j=-1;
	int ans=0;
	int len=0;
	int n=s.length();
	string res;
	
	
	
	map<char,int>mp;
	
	while(true){
	   
	   bool f1=false;
	   
	   bool f2=false;
	   
		
		while(i<n-1)
		{
			f1=true;
			
			i++;
			
			char ch=s[i];
			mp[ch]++;
			
			if(mp[ch]==2){
				break;
			}else{
			ans=(i-j);
			if(ans>len){
				len=ans;
				res=s.substr(j+1,i-j);
			}	
			}
			
		}
		while(j<i){
		
		   f2=true;
		    	
			j++;
			
			char ch=s[j];
			
			mp[ch]=mp[ch]-1;
			
			if(mp[ch]==1){
				break;
			}
			
		}
		
	
	if(f1==false&&f2==false)
	break;	
		
	}
	
	cout<<len<<endl;
	cout<<res<<endl;
	
}

int main()
{
		cout<<"Test #1"<<endl;
	longestSubstringWithoutRepeatingChar("abcabcbb");
	
	
	cout<<"Test #2"<<endl;
	longestSubstringWithoutRepeatingChar("bbbb");
	
}
