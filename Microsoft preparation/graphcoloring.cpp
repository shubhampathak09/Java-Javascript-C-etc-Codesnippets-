#include<bits/stdc++.h>
using namespace std;

#define V 4


bool issafe(int graph[V][V],int color[])
{
	
	
	for(int i=0;i<V;i++){
		for(int j=i+1;j<V;j++){
			if(graph[i][j]&&color[i]==color[j]){
				return false;
			}
		}
	}
	return true;
	
}

void printsol(int color[]){
	
	
	for(int i=0;i<V;i++){
		cout<<color[i]<<" ";
	}
}

bool graphColoring(int graph[V][V],int m,int i,int color[V]){
	
	if(i==V){
		
		
		if(issafe(graph,color)){
			
			printsol(color);
			return true;
			
		}
		return false;
	}
	
	for(int j=1;j<=m;j++){
		
		color[i]=j;
		if(graphColoring(graph,m,i+1,color)){
			return true;
		}
		color[i]=0;
	}
	return  false;
}


int main(){
	
	
	  int graph[V][V] = {
        { 0, 1, 1, 1 },
        { 1, 0, 1, 0 },
        { 1, 1, 0, 1 },
        { 1, 0, 1, 0 },
    };
    int m = 3; // Number of colors
 
    int color[V];
	
	 
	graphColoring(graph,m,0,color);
}
