// Balanced Parantheesis

#include<bits/stdc++.h>
using namespace std;



void balancedParanthesis(int n,int open,int close,string s){
	
if(open==n&&close==n){
	
	cout<<s<<endl;
	return;
	
}	

if(open!=n)	
	{
		balancedParanthesis(n,open+1,close,s+"{");
	}
if(close<open){
	balancedParanthesis(n,open,close+1,s+"}");
}
	
}

int main(){
	
int t;

cin>>t;
	
while(t--){

int n;

cin>>n;
//int n=2;

string ans="";

balancedParanthesis(n,0,0,ans);	
	
}

}
