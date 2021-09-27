/*
Given two integers a and b. 
Your task is to print the sum of 
all the digits appearing in 
the integers between a and b.

For example if a = 5 and b = 11,
 then answer is 38 (5 + 6 + 7 + 8 
 + 9 + 1 + 0 + 1 + 1)
 
 */
 
 #include<bits/stdc++.h>
 using namespace std;
 
 
 int dp[20][2][190];
 
 
 int solve(string s,int pos,int tight,int sum)
 {
 	
 	
 	if(pos==s.length())
 	{
 		return sum;
	 }
 	
 	if(dp[pos][tight][sum]!=-1)
 	return dp[pos][tight][sum];
 	
 	if(tight==1)
 	{
 		
 		int res=0;
 		
 		for(int i=0;i<=s[pos]-'0';i++)
 		{
 			if(i==s[pos]-'0')
 			{
 				res+=solve(s,pos+1,1,sum+i);
			 }else
			 {
			 	res+=solve(s,pos+1,0,sum+i);
			 }
		 }
 		
 		return dp[pos][tight][sum]=res;
	 }
	 else
	 {
	 	
	 	int res=0;
	 	for(int i=0;i<=9;i++)
	 	{
	 		res+=solve(s,pos+1,0,sum+i);
		 }
	     return dp[pos][tight][sum]=res;	
	 }
 }
 //11 18 26   5 6 7 8 9 10 11 
 int main()
 {
 	
 	int a=5;
 	int b=11;
 	
 	string a1=to_string(a-1);
 	
 	string b1=to_string(b);
 	
 	memset(dp,-1,sizeof(dp));
 	
 	
 	int ans1=solve(a1,0,1,0);
 	
 	cout<<ans1<<endl;
 	
 	memset(dp,-1,sizeof(dp));
 	
 	int ans2=solve(b1,0,1,0);
 	
 //	cout<<ans2;
 	
 	cout<<ans2-ans1;
 	
 	
 }
 
