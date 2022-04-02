#include<bits/stdc++.h>
using namespace std;


int minsteps(int x,int y){
	
	vector<int>visited(y+1,0);
	
	
	queue<pair<int,int>>q;
	q.push({x,0});
	
	int ans=INT_MAX;
	
	visited[x]=1;
	
	while(!q.empty()){
		
		
		
		auto p=q.front();
		q.pop();
		
		
		//visited[p.first]=1;
		
		
		if(p.first==y){
			
		//	ans=min(p.second,ans);
			return p.second;
		}
		
		if(p.first+1<=y&&visited[p.first+1]==0){
			q.push({p.first+1,p.second+1});
			visited[p.first+1]=1;
		}
		if(p.first*2<=y&&visited[p.first*2]==0){
			q.push({p.first*2,p.second+1});
			visited[p.first*2]=1;
		}
		
	}
	
	return ans;
}

int main(){
	
	
	
	
	// simple fun loney frog
	
	
	int ans=minsteps(1,15);
	
	
	cout<<ans;
}
