//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=1e5;
//
//vector<int>gr[N];
//
//vector<int>vis(N);
//
//int n,m;
//
//// 4 4
//// 0 1
//// 1 2
//// 2 3
//// 1 3
//
//bool hp=false;
//
//void paths(int cur,int cnt){
//	
//	if(cnt==N){
//		hp=true;
//		return;
//	}
//	
//  //  cout<<cur<<endl;	
//	vis[cur]=1;
//	
//	for(auto x:gr[cur] ){
//		
//		if(!vis[x]){
//			paths(x,cnt+1);
//		}
//		
//	}
//	vis[cur]=0;
//	return;
//}
//
//int main(){
//	
//	cin>>n>>m;
//	
//	for(int i=0;i<m;i++){
//		
//		int x,y;
//		cin>>x>>y;
//		gr[x].push_back(y);
//		gr[y].push_back(x);
//		
//	}
//	
//	for(int i=0;i<n;i++){
//		paths(i,1);
//	}
//	
//	cout<<hp;
//	 
//}
//// fuck





#include<bits/stdc++.h>
using namespace std;

const int N=1e5;

bool hp=false;

vector<int>gr[N];
int vis[N];
int n,m;

void paths(int curr,int cnt){
	
	if(cnt==n){
		hp=true;
		return;
	}
	
	vis[curr]=1;
	for(auto x:gr[curr]){
		if(vis[x]==false){
			paths(x,cnt+1);
		}
	}
	vis[curr]=0;
	return;
}

int main(){
	
	
	cin>>n>>m;
	
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		gr[x].push_back(y);
		gr[y].push_back(x);
	}
	
//	for(int i=0;i<n;i++){
//		paths(i,1);
//	}
     
	paths(1,1); 
	 	
	cout<<hp;
}
