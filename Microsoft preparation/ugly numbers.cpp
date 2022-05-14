//ugly numbers

#include<bits/stdc++.h>
using namespace std;




int main(){
	
	
int n=11;

int dp[n+1];

dp[1]=1;

int i1=1;
int i2=1;
int i3=1;


int currp2=2*i1;
int currp3=3*i2;
int currp5=5*i3;	


for(int i=2;i<=n;i++){
	
	
	dp[i]=min(currp2,min(currp3,currp5));
	
	if(dp[i]==currp2){
		i1=i1+1;
		currp2=2*i1;
	}if(dp[i]==currp3){
		i2=i2+1;
		currp3=3*i2;
	}if(dp[i]==currp5)
	{
	
	i3=i3+1;
	currp5=5*i3;
}
}
	
	
	for(int i=1;i<=n;i++)
	{
		cout<<dp[i]<<" ";
	}
	
}
