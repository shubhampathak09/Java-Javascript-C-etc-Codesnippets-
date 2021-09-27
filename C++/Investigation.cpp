/*An integer is divisible by 3 if the sum of its digits is also divisible by 3. For example, 3702 is divisible by 3 and 12 (3+7+0+2) is also divisible by 3. This property also holds for the integer 9.
In this problem, we will investigate this property for other integers.
Input
Input starts with an integer T (= 200), denoting the number of test cases.
Each case contains three positive integers A, B and K (1 = A = B < 231 and 0 < K < 10000).
Output
For each case, output the case number and the number of integers in the range [A, B] which are divisible by K and the sum of its digits is also divisible by K.
*/


// Investifgation


#include<bits/stdc++.h>
using namespace std;


int dp[20][2][180];



int g(int num1 ,string num,int pos,int tight,int sum,int k)
{
	if(pos==num.length())
	{
	
	if(num1%k==0&&sum%k==0)
	{
		return 1;
	}else
	return 0;
}
	else if(dp[pos][tight][sum]!=-1)
	{
		return dp[pos][tight][sum];
	}
	
	else if(tight==1)
	{
		
		int res=0;
		
		for(int i=0;i<=num[pos]-'0';i++)
		{
			int numm1=num1*10+i;
			
			if(i==num[pos]-'0'){
				
				res+=g(numm1,num,pos+1,1,sum+i,k);
			}else
			{
				res+=g(num1,num,pos+1,0,sum+i,k);
			}
		}
		return dp[pos][sum][tight]=res;
	}
	else
	{
		int res=0;
		for(int i=0;i<=9;i++)
		{
			int numm1=numm1*10+i;
			
			res+=g(numm1,num,pos+1,0,sum+i,k);
		}
		
		return dp[pos][sum][tight]=res;
	}
}

int main()
{
	
	memset(dp,-1,sizeof(dp));
	
	int a=1;
	
	string str1=to_string(a-1);
	
	int b=20;
	
	string str2=to_string(b);
	
	int k=2;
	
	int ans1=g(0,str1,0,1,0,k);
	
	
	int ans2=g(0,str2,0,1,0,k);
	
	
//	cout<<ans1<<" "<<ans2;
	
	int result=ans2-ans1;
	
	cout<<endl;
	
	cout<<result;
	
//	cout<<dp[0][0][0];
	
}
