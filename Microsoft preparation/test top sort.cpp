// top sort util


#include<bits/stdc++.h>
using namespace std;


int V=100001

vector<vector<int>>g;

void topSortUtil(int v,bool visited[],stack<int>&s){
	
	visited[v];
	
	
	for(auto x:g[v]){
		
		if(!visited[x]){
			topsortUtil(x,visited,stack);
		}
		
	}
	s.push(v);
}


void topsort(){
	
	stack<int>s;
	
	bool *visited=new bool[V];
	
	
	for(int i=0;i<V;i++)
	visited[i]=false;
	
	
	for(int i=0;i<=V;i++){
		if(!visited[i]){
		topSortUtil(i,visited,s);	
		}
	}
	while(!s.empty()){
		cout<<(char)('a'+s.top());
		s.pop();
	}
}

int main(){
	
	
	string words[];
	
	int n=sizeof(words)/sizeof(words[0]);
	
	
	for(int i=0;i<n-1;i++){
		
	string word1=words[i];
	string word2=words[i+1];
	
	for(int j=0;j<min(word1.length,words2.length));
	{
		
		if(word1[j]!=word2[j])
		{
			g[word1[j]-'a'].push_back(word2[j]-'a');
			break;
		}
		
		
	}
		
	}
	
	topsort();
}
