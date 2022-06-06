#include<bits/stdc++.h>
using namespace std;


bool isvalid(string s){
	if(s[0]=='0')
	return false;
	
	if(stoi(s)>=0 && stoi(s)<=255)
	return true;
	
	return false;
	
}

int main(){
	
	//Input: s = "25525511135"
	
	
	string s="25525511135";
	
	int n=s.length();
	
	
	for(int i=1;i<=3&&i<s.length();i++){
		
		string first=s.substr(0,i);
		
		if(isvalid(first)){
			
			for(int j=1;j<=3&&i+j<s.length();j++){
				string second=s.substr(i,j);
				
				if(isvalid(second)){
					
					for(int k=1;k<=3&&i+j+k<s.length();k++)
					{
						string third=s.substr(i+j,k);
						string fourth=s.substr(i+j+k);
						
						if(isvalid(third)&& isvalid( fourth)){
							
							string result=first + "." + second +"." +third +"." + fourth;
							
							cout<<result<<endl;
							
						}
					}
				}
			}
			
		}
		
	}
	
}
