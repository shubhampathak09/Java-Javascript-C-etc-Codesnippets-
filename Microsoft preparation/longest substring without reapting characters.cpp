#include<bits/stdc++.h>
using namespace std;

int max(int a,int b){
	
	return a > b ? a : b;
}



int main(){
	 
	string ans=""; 
	 
	string s="geeksforgeeks";
	
	
	int i=0;
	int j=0;
	
	set<int>se;
	
	int maxlen=0;
	
	
	while(j<s.length()){
		
		
		if(se.find(s[j])==se.end()){
			
			se.insert(s[j]);
			j++;
			//maxlen=max(maxlen,se.size());
			if(maxlen<se.size()){
				maxlen=se.size();
				ans=s.substr(i,j-i);
				
			}
		}else
		{
			se.erase(s[i]);
			i++;
			
		}
		
	}
	
	cout<<maxlen;
	
	cout<<endl;
	
	cout<<ans;
	
	return 0;
	
	
}
