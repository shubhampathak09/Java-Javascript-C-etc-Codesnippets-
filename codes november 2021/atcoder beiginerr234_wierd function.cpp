#include<bits/stdc++.h>
using namespace std;



//https://stackoverflow.com/questions/30988002/what-does-rebalancing-mean-in-apache-kafka-context


//https://stackoverflow.com/questions/56647442/kafka-keeps-rebalancing-consumers

//https://stackoverflow.com/questions/30988002/what-does-rebalancing-mean-in-apache-kafka-context

//https://stackoverflow.com/questions/42706463/what-factors-determine-consumer-group-rebalancing-time

//https://stackoverflow.com/questions/30988002/what-does-rebalancing-mean-in-apache-kafka-context


//https://stackoverflow.com/questions/39730126/difference-between-session-timeout-ms-and-max-poll-interval-ms-for-kafka-0-10


//

int f(int x){
	
	return x*x+2*x+3;
	
}





int solve(){
	
	int t;
	cin>>t;
	
	int ans=f(f(f(t)+t)+f(f(t))); 
	
	cout<<ans;
	
	return ans;
	
}

int main()
{
	
	
	
 solve();
	
	
	
	
	
}
