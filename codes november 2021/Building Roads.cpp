// Min cost to connect graph with unnweighted edges

#include<bits/stdc++.h>
using namespace std;

int cc=0;

int n,m;

vector<bool>visited;
vector<int>lead;
vector<vector<int>>g;

void dfs(int i){
	
	
	visited[i]=true;
	
	for(auto  x:g[i]){
		
		if(visited[x]==false){
			
			dfs(x);
			
		}
		
	}
	
}

void process_cc(){
	
	
	for(int i=1;i<=n;i++){
		
		if(!visited[i]){
			
			
			cc++;
		    lead.push_back(i);
			dfs(i); 	
		}
		
	}
	
	
	cout<<lead.size()-1;
	cout<<endl;
	
	for(int i=0;i<lead.size()-1;i++){
		
		
		cout<<lead[i]<<"..."<<lead[i+1]<<endl;
	}
	
	
}




int main(){
	
	
//	int n,m;
	
	cin>>n>>m;
	
	
	g.resize(n+1);
//	lead.resize(n+1);
	visited.resize(n+1);
	
	
	for(int i=1;i<=m;i++){
		
		int a,b;
		cin>>a>>b;
		
		g[a].push_back(b);
		g[b].push_back(a);
		
		
	}
	
	
	process_cc();
	
	
	//done
	
}
