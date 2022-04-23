#include<bits/stdc++.h>
using namespace std;


bool solve(string text,string pat){
	
	int m=text.length();
	int n=pat.length();
	
	int dp[n+1][m+1];
	
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			
			
			if(i==0&&j==0){
				dp[i][j]=1;
				
			}else if(i==0){
				dp[i][j]=0;
				
			}else if(j==0){
				
				
				
				char x=pat[i-1];
			 
			 
						dp[i][j]=dp[i-2][j];
					
					
				}
				else
				dp[i][j]=0;
				
				
			}else
			{
				
				char patx=pat[i-1];
				char textx=text[j-1];
				
				
				if(textx==patx||patx=='.')
				{
					dp[i][j]=dp[i-1][j-1];
				}else if(textx!=patx){
					dp[i][j]=0;
				}else if(patx=='*'){
					
					dp[i][j]=dp[i-2][j];
					
					char second=pat[i-2];
					
					if(second=='.'||second==textx)
					dp[i][j]=dp[i][j]||dp[i][j-1];
					
				}
				else{
					dp[i][j]=0;
				}
			}
			
			
		}
	}	
	
	return dp[n][m];
}

int main(){
	
	
	cout<<solve("mississippi","mis*i.*p*i");
	
	
}
