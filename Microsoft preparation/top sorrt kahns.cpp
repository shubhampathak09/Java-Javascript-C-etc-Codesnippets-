//

//wrt wrf er ett rftt


//t->f  w->e  r->t  e->r

//w ->e->r->t->f
 
//kahns Algo

#include<bits/stdc++.h>
using namespace std;




vector<vector<int>>g;


void topSort(int V){
	
	vector<int>indegree;
	vector<int>top_sort;
	
		for(int u=0;u<V;u++){
			
			for(auto x : g[u]){
				
				indegree[x]++;
				
			}
			
		}
	
	
	
	queue<int>q;
	for(int i=0;i<V;i++){
		if(indegree[i]==0)
		{
			q.push(i);
		}
	}
	int cnt=0;
	
	vector<int>top_order;
	
	while(!q.empty()){
		
	int u=q.front();
	
	q.pop();

    top_order.push_back(u);
    
    for(auto x:g[u]){
    	indegree[x]=indegree[x]-1;
    	if(indegree[x]==0){
    		q.push(x);
		}
	}
    cnt++;
		
	}
	
	if(cnt!=V){
	cout<< " Not a Valid graph for topological sort";	
	}
	
	
	else
	{
		for(int i=0;i<top_sort.size();i++){
			cout<<top_sort[i];
		}
	}
	
}

int main(){
	
	
	vector<string> words={"wrt","wrf","er","ett","rftt"};
	
	
	int n=words.size();
	
	int V=n;
	g.resize(n);
	
	for(int i=0;i<n;i++){
		
		string word1=words[i];
		string word2=words[i+1];
		
		for(int j=0;j<min(word1.size(),word2.size());j++){
		
		   if(word1[j]!=word2[j]){
		   	g[word1[j]-'a'].push_back(word2[j]-'a');
		   	break;
		   }
			
		}
		
		
	}
	
	topSort(V);
	
}


// check
