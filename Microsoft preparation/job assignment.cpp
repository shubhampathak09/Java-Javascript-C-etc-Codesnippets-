// hungarian job assignment problem

#include<bits/stdc++.h>
using namespace std;

//1 ,{p1,p2,..,pn}

// c11 + 2..j -> p2,p3..pn

//c21 +  2..n -> p1,p3.. ad spon 

// similart for other

//dp(i,mask)=  cji + (i+1,mask-jth bit off);



int cost[21][21];

int dp[21][(1<<21)];


int solve(int i,int mask,int &n)
{
	
	if(i==n){
		return 0;
	}
	
	if(dp[i][mask]!=-1){
		return dp[i][mask];
	}
		int ans=INT_MAX;
	for(int j=0;j<n;j++){
	
		
		if(mask & (1<<j)){
			ans=min(ans,cost[j][i] +solve(i+1,(mask ^ (1<<j)),n));
		}
		
	}
	dp[i][mask]=ans;
	return dp[i][mask];
}

int main(){

    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		cin>>cost[i][j];
		}
	}
    int mask=(1<<n)-1;    //0 to 2 ^n -1  fro n elements
    
    cout<<solve(0,mask,n);

}

/*
4
9 2 7 8
6 4 3 7
5 8 1 8
7 6 9 4
0  wht?
*/

/*
4
9 2 7 8
6 4 3 7
5 8 1 8
7 6 9 4
13
*/
