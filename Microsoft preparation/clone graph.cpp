//clone a graph
#include<bits/stdc++.h>
using namespace std;


struct graph{
	
	
	int val;
	
	vector<graph*>neighbours;
	
};


graph*cloneGraph(graph*src){
	
	
	map<graph*,graph*>m;
	queue<graph*>q;
	
	
	q.push(src);
	graph*node;
	node=new graph();
	node->val=src->val;
	m[src]=node;
	
	
	while(!q.empty()){
		
		graph*u=q.front();
		vector<graph*>v=u->neighbours;
		q.pop();
		
		for(int i=0;i<v.size();i++){
			
			if(m[v[i]]==NULL){
				
				
				node=new graph();
				node->val=v[i]->val;
				m[v[i]]=node;
				q.push(v[i]);
			}
			
			m[u]->neighbours.push_back(m[v[i]]);
			
		}
		
	}
	
	return m[src];  // return address of cloned node
}


void bfs(graph*src){
	
	map<graph*,bool>visit;
	
	
	queue<graph*>q;
	
	q.push(src);
	
	while(!q.empty()){
		
		auto x=q.front();
		cout<<x->val<<"\n";
		cout<<x<<"\n";
		q.pop();
		
		for(int i=0;i<x->neighbours.size();i++){
			
			if(!visit[x->neighbours[i]]){
				q.push(x->neighbours[i]);
				visit[x->neighbours[i]]=true;
			}
			
		}
		
	}
	cout<<endl;
	
}

int main(){
	
	
	graph *node1=new graph();
	node1->val=1;
	graph*node2=new graph();
	node2->val=2;
	graph*node3=new graph();
	node3->val=3;
	graph*node4 =new graph();
	node4->val = 4;
	
	vector<graph *> v;
    v.push_back(node2);
    v.push_back(node4);
    node1->neighbours = v;
    v.clear();
    v.push_back(node1);
    v.push_back(node3);
    node2->neighbours = v;
    v.clear();
    v.push_back(node2);
    v.push_back(node4);
    node3->neighbours = v;
    v.clear();
    v.push_back(node3);
    v.push_back(node1);
    node4->neighbours = v;
    
    
    bfs(node1);
    
    graph*noden=cloneGraph(node1);
    
    
    bfs(noden);
    
    
}
