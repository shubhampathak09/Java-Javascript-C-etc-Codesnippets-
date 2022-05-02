// decode ways

#include<bits/stdc++.h>
using namespace std;

int countways(string s){
	
	
	if(s[0]=='0'){
		return 0;
	}
	
	int n=s.length();
	
	int dp[n];
	
	dp[0]=1;
	
	for(int i=1;i<n;i++){
		
		
		if(s[i-1]=='0'&&s[i]=='0'){
			
			dp[i]=0;
		}else if(s[i-1]=='0'&&s[i]!='0'){
			
			dp[i]=dp[i-1];
			
		}else if(s[i-1]!='0'&&s[i]=='0'){
			
			if(s[i-1]=='1'||s[i-1]==2){
				if(i>=2)
				dp[i]=dp[i-2];
				else
				dp[i]=1;
			}else
			dp[i]=0;
		}
		else
		{
			string last2=s.substr(i-1,2);
			int x=stoi(last2);
			
			if(x<=26){
				if(i>=2)
				dp[i]=dp[i-1]+dp[i-2];
				else
				dp[i]=dp[i-1]+1;
			}else
			dp[i]=dp[i-1];
		}
	}
	return dp[n-1];
}

int main(){
	
	
	cout<<countways("21123")<<endl;
	
	cout<<countways("25114")<<endl;
	
	cout<<countways("1111111111")<<endl;
	
	cout<<countways("3333333333")<<endl;
	
	cout<<countways("0");
	
}
