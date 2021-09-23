// optimal game strategy

#include<bits/stdc++.h>
using namespace std;


int dp[1000][1000];

int solve(vector<int>a,int i,int j)
{
	
	if(i>j)
	{
		return 0;
	}
	
	if(j==i+1
	){
		return max(a[i],a[j]);
	}
	
	if(i==j)
	{
		return a[i];
	}
	
	if(dp[i][j]!=-1)
	return dp[i][j];
	
	int choice1= a[i]+min(solve(a,i+2,j),solve(a,i+1,j-1));
	int choice2=a[j]+min(solve(a,i+2,j-1),solve(a,i,j-2));
	
//	cout<<choice1<<" "<<choice2<<endl;
	
	return dp[i][j]=max(choice1,choice2);
	
}

int main()
{
	
	
	memset(dp,-1,sizeof(dp));
	vector<int>a={20,3,2,10,3};
	
	
	int ans=solve(a,0,a.size()-1);
	
	//To Do testing
	
	
	cout<<ans;
	
}
