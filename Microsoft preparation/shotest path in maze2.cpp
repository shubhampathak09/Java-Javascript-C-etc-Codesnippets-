#include<bits/stdc++.h>
using namspace std;

#define N 
#define N

vector<vector<int>> g(N*M+1);   // o to N*M-1

vector<pair<int,int>>dist(N*M+1,INT_MAX);

priority_queue<int,pair<int,int>>>pq   // min heap by default


void solveSpecialMaze(){
	
	pq.push({0,{sx,xy}});
	
	while(!pq.empty()){
		
		auto x=pq.top();
		pq.pop();
		
		
		
		currentDist=x.first;
		currtX=x.second.first;
		currY=x.second.second;
		
		if(curX==destX && currY ==destY){
			return currentDist;
		}
		
		// first go down as much as possible
		
		int i=currX
		while(i+1<n){
			i++;
		}
		if(s.count({i,y})==0){
			// three things
			// 1.abs distance ->pq order
			// visited
			//push
			
			int dist=abs(i-currtX) +abs(currY -currY);
			if(dist + currentDist<dist[{currX,currY}]){
				dist[{currX,currY}]=dist+currentDist;
			}
			pq.push({dist[{currX,currY}],{i,currY}});
		}
		
		
		// now go up
		
			 i=currX
		while(i-1>=0){
			i--;
			
		}
		if(s.count({i,y})==0){
			// three things
			// 1.abs distance ->pq order
			// visited
			//push
			
			int dist=abs(i-currtX) +abs(currY -currY);
			if(dist + currentDist<dist[{currX,currY}]){
				dist[{currX,currY}]=dist+currentDist;
			}
			pq.push({dist[{currX,currY}],{i,currY}});
		}
		// left
			int i=currY
		while(i-1>=0){
			i--;
		}
		if(s.count({currX,i})==0){
			// three things
			// 1.abs distance ->pq order
			// visited
			//push
			
			int dist=abs(CurrX-currX) +abs(i -currY);
			if(dist + currentDist<dist[{currX,currY}]){
				dist[{currX,currY}]=dist+currentDist;
			}
			pq.push({dist[{currX,currY}],{currX,i}});
		}
		
		// right
			int i=currX
		while(i+1<n){
			i++;
		}
		if(s.count({i,y})==0){
			// three things
			// 1.abs distance ->pq order
			// visited
			//push
			
			int dist=abs(i-currtX) +abs(currY -currY);
			if(dist + currentDist<dist[{currX,currY}]){
				dist[{currX,currY}]=dist+currentDist;
			}
			pq.push({dist[{currX,currY}],{i,currY}});
		}`
	}
	
	
}



int solv

int main(){
	
	
	
	
}
