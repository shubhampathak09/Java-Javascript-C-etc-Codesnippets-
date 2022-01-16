#include<bits/stdc++.h>
using namespace std;


vector<vector<int>>g(10001);
vector<int>visited(10001);
vector<int>path(10001);



bool iscompare(int n1,int n2){
	
	
	string s1=to_string(n1);
	string s2=to_string(n2);
	
	int c=0;
	
	if(s1[0]==s2[0])
	c++;
	if(s1[1]==s2[1])
	c++;
	if(s1[2]==s2[2])
	c++;
	if(s1[3]==s2[3])
	c++;
	
	return c==1;
}

void  sieve(vector<int>&p){
	
	int n=9999;
	
	for(int i=0;i<=n;i++)
	p[i]=1;
	
	p[0]=p[1]=1;
	
	for(int i=1;i*i<=n;i++){
		
		if(p[i]==1){
			
			for(int k=i*i;k<=n;k+=i){
				
				p[k]=0;
			}
		}
		
	}
	
	vector<int>prime;
	
	for(int i=1000;i<=999;i++){
		
		if(p[i]==1)
	    prime.push_back(i);	
	}
	
	
	
	for(int i=0;i<prime.size();i++){
		
		for(int j=i+1;j<prime.size();j++){
			
			
			if(iscompare(prime[i],prime[j])){
				
				g[i].push_back(j);
			    g[j].push_back(i);
				
			}
			
		}
		
	}
	
}

int bfs(int s1,int s2){
	
	path[s1]=0;
	
	visited[s1]=1;
	
	queue<int>q;
	q.push(s1);
	
	while(!q.empty()){
		
		
		int p=q.front();
		
		q.pop();
		
		for(auto x:g[p]){
			
			if(!visited[x]){
				
				visited[x]=1;
				path[x]=1+path[p];
				
			}
			if(x==s2){
				return path[x];
			}
		}
		
	}
	
	
}

int main()
{
	
	vector<int>p;
	
	sieve(p);
	
	cout<<p.size();
	
	
	//int ans=bfs(1033,8179);
	
	//cout<<ans;
	
	
}



// shit!!!
