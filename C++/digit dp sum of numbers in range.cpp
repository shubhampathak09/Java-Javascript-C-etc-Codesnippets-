/*Given two integers a and b. Your task is to print the sum of 
all the digits appearing in the integers between a and b.
For example if a = 5 and b = 11, then answer is 38 (5 + 6 + 7 + 8 + 9 + 1 + 0 + 1 + 1)
Constraints : 1 <= a < b <= 10^18
*/

#include<bits/stdc++.h>
using namespace std;

int dp[20][2][180];   // pos tight and sum

int solve(string num,int pos,int tight,int sum){
	
	if(pos==num.length()){
		
	//	cout<<sum<<" "<<pos<<endl;
		return sum;
		
	}
	
	if(tight==1){
		
		 int res=0;
		 
		 for(int i=0;i<=num[pos]-'0';i++)
		 {
		 	//res+=i;
		 	if(i==num[pos]-'0'){
		 //		cout<<i<<endl;
		        res+=solve(num,pos+1,1,sum+i);   		
		 	//	return res;
		 		
			 }else
			 {
			 	 res+=solve(num,pos+1,0,sum+i);
			 }
		 	
		 }
		 return res;
		}else{
		
		
		int res=0;
		
		for(int i=0;i<=9;i++)
		{
			 res+=solve(num,pos+1,0,sum+i);
		}
		return res;	
		}
		
	}
 
	// 0 +1 +2 +3 +4


int main()
{
	
	
	int n=4;
	
	string s=to_string(4);
	
	
	
	
	// 
	
//	cout<<s;
	
	int sum=0;
	
	
	cout<<solve(s,0,1,sum);
	
	
	// Genral idea
	
	
	// [l,r]
	
	// ans1 0 to l-1 
	
	
	// ans2 -> 0, r
	
	
	// return ans2-ans1   ->general idea +memoize
	
}

// 
