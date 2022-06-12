/*
BUGLIFE - A Bug’s Life
#graph-theory #graph #dfs

Professor Hopper is researching the sexual behavior of a rare species of bugs.
 He assumes that they feature two different genders and that they only interact with bugs of the opposite gender. 
In his experiment, individual bugs and their interactions were easy to identify, because numbers were printed on their backs.

Given a list of bug interactions, decide whether the experiment supports his assumption
 of two genders with no homosexual bugs or if it contains some bug interactions that falsify it.
 */
 

 
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>g(4000);
vector<int>visited(4000);
vector<int>color(4000);


bool isBipartite(int v,vector<vector<int>>&g,vector<int>&visited,vector<int>&color){
	
	for(auto x:g[v]){
		
		
		if(visited[x]==false){
			
			visited[x]=true;
			
			color[x]=!color[v];
			
			if(!isBipartite(x,g,visited,color))
			     return false;  
		}
		else if(color[x]==color[v])
		return false;
	}
	
	return true;
	
}

void solve(){
	
	int n,m;
	
	cin>>n>>m;
	
	bool flag=0;
	
	for(int i=1;i<=m;i++){
		int a,b;
		cin>>a>>b;
		
		g[a].push_back(b);
		g[b].push_back(a);
		
		
		
		
	}
	
	for(int i=1;i<=n;i++){
		
			visited[i]=1;
			color[i]=0;
		
		if(!isBipartite(i,g,visited,color))
		{
		
			cout<<"Suspicious bugs found"<<endl;
			flag=1;
			break;
		}
	}
	if(flag==0)
	cout<<"No Suspicious bugs found";
}

int main(){
	
	
	solve();
	
} 











/*




#include <bits/stdc++.h>
using namespace std ;

int n, m, u, v, T ;
vector<vector<int>> adj ;
vector<int> gender ;
bool suspicious ;

void dfs(int t, int c)
  {
    if(suspicious) return ;
    gender[t]=c ;
    for(int i=0 ; i<adj[t].size() ; i++)
      {
        if(gender[adj[t][i]]==-1)
          dfs(adj[t][i], 1-c) ;
        else if(gender[t]==gender[adj[t][i]])
          {
            suspicious=true ;
            return ;
          }
      }
  }

int main()
  {
    cin>> T ;
    for(int tc=1 ; tc<=T ; tc++)
      {
        cin>> n >> m ;
        suspicious=false ;
        adj.clear() ;
        adj.resize(n+1) ;
        gender.assign(n+1, -1) ;
        for(int i=0 ; i<m ; i++)
          {
            cin>> u >> v ;
            adj[u].push_back(v) ;
            adj[v].push_back(u) ;
          }
        for(int i=1 ; i<=n ; i++)
          if(gender[i]==-1)
            dfs(i, 0) ;
        cout<< "Scenario #" << tc << ":" << endl ;
        if(suspicious) cout<< "Suspicious bugs found!" << endl ;
        else cout<< "No suspicious bugs found!" << endl ;
      }
  }
  
  */
