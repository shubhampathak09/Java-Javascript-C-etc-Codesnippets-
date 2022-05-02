// print all hp

#include<bits/stdc++.h>
using namespace std;


vector<int>gr[100001];
int visited[100001];
int n,m;
vector<int>paths;

void path(vector<int>&paths,int i,int cnt){
	
	if(cnt==n){
		for(int i=0;i<n;i++)
		cout<<paths[i]<<" ";
		cout<<endl;
		return;
	}
	
	visited[i]=1;
	paths.push_back(i);
	for(auto x:gr[i]){
		if(!visited[x]){
			
			path(paths,x,cnt+1);
		}
		
	}
	
	visited[i]=0;
	paths.pop_back();
//	return;
}

int main(){
	
cin>>n>>m;
for(int i=0;i<m;i++){
	int x,y;
	cin>>x>>y;
	gr[x].push_back(y);
	gr[y].push_back(x);
}	
	
	
	for(int i=0;i<n;i++){
		path(paths,i,1);
	}
	
}
