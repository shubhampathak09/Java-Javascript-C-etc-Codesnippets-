#include<bits/stdc++.h>
using namespace std;





int main(){
	

string s="aabbcdbca";

int n=s.length();

int k=2;

int i=-1;
int j=-1;
int ans=INT_MIN;
map<char,int>mp;

string res="";

while(true){


bool f1=false;
bool f2=false;

while(i<n){
	i++;
	mp[s[i]]++;
	
	
	if(mp.size()<k) continue;
	else if(mp.size()==k){
		
		int len=(i-j);
		if(len>ans){
	     	
		ans=len;
		res=s.substr(i,len);
	}
	}else{
		break;
	}
	f1=true;
}
	
while(j<i){
	
	j++;
	if(mp[s[j]]==1){
		mp.erase(s[j]);
	}else
	     mp[s[j]]=mp[s[j]]-1;
	
	if(mp.size()>k) continue;
	else if(mp.size()==k){
		int len=(i-j);
		if(len>ans){
	    res=s.substr(j,len);	
		ans=len;
		break;
	}
	}
	
	f2=true;
}	


if(f1==false&&f2==false)
break;
}
	

cout<<res<<" "<<ans;
	
}
