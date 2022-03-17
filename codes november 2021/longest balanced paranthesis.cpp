// Longest balanced paranthesis

#include<bits/stdc++.h>
using namespace std;


int longestLength(string s){
	
	
	stack<int>st;
	st.push(-1);
	
	int res=0;
	
	for(int i=0;i<s.length();i++){
		
		if(s[i]=='(')
		{
			
			st.push(i);
			
		}else
		{
			
			if(!s.empty())
				
				
				st.pop();
				
				
				if(!st.empty()){
					
					res=max(res,i-st.top());
					
				}else
				{
					st.push(i);
				}
				
			}
			
		
		
	}
	
	
	return res;
	
}

int main()
{
	
	
	string s=")()(())";
	
	
	cout<<longestLength(s);
}



// 250 problem geeks for geeks dp
//leetcode 360 problem s dp
// lint code adhock 100
//cses problem set
//hash map ->pepcoding basic +advanced
//2d arrays , stacks and linked list pepcoding beigne +interm
//binary search aditya verma 
// binary seaarch adhoc 100
// love babar 450 question
//striver interview pep list

// totAL  1800 PROBLEMS  

// TODAY IS 15 MARCH ->  15 SEP   ATLEASST 50 %  900 PROBLEMS   450 PRROBLMS   NEXT 7 MONTHS I CAN DO
