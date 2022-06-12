/*ou have to help a thief to steal as many as GoldCoins 
as possible from a GoldMine.
 There he saw N Gold Boxes an each Gold Boxes consists of
  Ai Plates each plates consists of Bi Gold Coins.
   Your task is to print the maximum gold coins theif can 
   steal if he can take a maximum of T plates.
   */

 
/*
Example 1:

Input:
T = 3, N = 3 
A[] = {1, 2, 3}
B[] = {3, 2, 1}
Output:
7
Explanation:
The thief will take 1 plate of coins
from the first box and 2 plate of coins
from the second plate. 3 + 2*2 = 7.
*/


#include<bits/stdc++.h>
using namespace std;


int main(){
	
	
	// run for other test cases as well like t=0, n=3  a={1,3,2} b={2,3,1}
	
	int t=3;
	vector<int> a={1,2,3};
	
	vector<int>b={3,2,1};
	int n=3;
	
	priority_queue<pair<int,int>,vector<pair<int,int>>>pq;
	
	
	for(int i=0;i<n;i++){
		
		pq.push({b[i],a[i]});
		
	}
	
	
	//  3 1
	// 2  2
	// 1 3
	
	int val=0;
	
	
	while(!pq.empty()&&t>0){
		
		auto x=pq.top();
		pq.pop();
		
		if(x.second>t){
			
			val+=(t*x.first);
			t=0;
		}
		else
		{
			val+=(x.second*x.first);
			t-=x.second;
		}
		
	}
	
	cout<<val;
}
