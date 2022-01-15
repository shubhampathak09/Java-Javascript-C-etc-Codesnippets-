// Shortest path to reach from one prime to antoher
// at each step chaning exactly one digit and nuumbers
// formed on 
//the way are prime as well


#include<bits/stdc++.h>
using namespace std;



void sieve(vector<int>&v){
	
	
	int n=9999;
	
	int prime[n+1];
	
	memset(prime,1,sizeof(int));
	
	for(int p=2;p<v.size();p++){
		
		if(prime[p]==1){
			
			for(int i=p*p;i<=n;i+=p){
				prime[i]=0;
			}
			
		}
		
	}
	// check sieve again
	
	for(int i=1000;i<=9999;i++){
		
	
		if(prime[i]==1)
		{
			cout<<"cc.."<<i<<endl;
		v.push_back(i);
	}
	}
	
	
}


bool compare(int num1,int num2){
	
	string s1=to_string(num1);
	string s2=to_string(num2);
	
	int c=0;
	
	if(s1[0]!=s2[0])
	c++;
	if(s2[1]!=s2[1])
	c++;
	if(s2[2]!=s2[2])
	c++;
	if(s1[3]!=s2[3])
	c++;
	
	return c==1;
	
}

vector<vector<int>>g;
//vector<int>vis;


int bfs(int index1,int index2,int n){
	
cout<<index1<<" "<<index2<<" "<<n<<" "<<endl;	
	
int visited[n];

for(int i=0;i<n;i++){
	visited[i]=0;
	
	queue<int>q;
	
	int step=0;
	
	visited[index1]=1;
	
	q.push(index1);
	
	while(!q.empty()){
		
		int u=q.front();
		
		q.pop();
		
		
		for(auto x:g[u]){
			if(visited[x]==false){
			//	cout<<x<<" ";
				visited[x]=true;
				q.push(x);
				step++;
			}
			
			if(x==index2)
			return step;
		}
		
		
	}	
}	
	
}

int sp(int num1,int num2){
	
	
	vector<int>pset;
	sieve(pset);
	
	cout<<pset.size();
	
	g.resize(pset.size());
	
	for(int i=0;i<pset.size();i++){
		for(int j=0;j<pset.size();j++){
			
			
			if(compare(pset[i],pset[j]))
			{
				cout<<pset[i]<<" "<<pset[j];
				g[i].push_back(j);
				g[j].push_back(i);
			}
		}
	}
	
	
	int index1,index2;
	
	
	for(int j=0;j<pset.size();j++){
		if(pset[j]==num1)
		index1=j;
	}
	for(int j=0;j<pset.size();j++){
		if(pset[j]==num2)
		index2=j;
	}
	
	
	//bfs
		
		return bfs(index1,index2,pset.size());
}




int main(){
	
	
	int n1=1033;
	int n2=8179;
	
	
	cout<<"The shortest path length from "<<n1<<"to "<<n2<<"is.."<<sp(n1,n2);
	
}