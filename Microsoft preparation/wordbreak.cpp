#include<bits/stdc++.h>
using namespace std;

int main(){
	
	
	set<string>ss={"loves","pep","coding","pepcoding","ice","cream","icecream","man","go","mango"};
	
	string sentence="pepcodinglovesmangoicecream";
	
	
	
	int n=sentence.length();
	int dp[n];
	
	for(int i=0;i<n;i++){
		
		for(int j=0;j<=i;j++){
			
			cout<<i-j<<" ";
			string sub=sentence.substr(j,n-j-1);
			cout<<sub<<endl;
			if(ss.find(sub)!=ss.end())
			{
				if(j>0){
					dp[i]+=dp[j-1];
				}else
				{
					dp[i]+=1;
				}
			}
		}
		
		
	}
	
	cout<<dp[n-1];
}
