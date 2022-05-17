#include<bits/stdc++.h>
using namespace std;



int main(){
	
	
	vector<string>words={"wrt","wrf","er","ett","rftt"};
	
	int n=words.size();
	
	vector<int>indegree(100,0);
	queue<int>q;
	
	
vector<vector<int>>g(n,vector<int>(n,0));

string ans="";
	
	for(int i=0;i<words.size()-1;i++){
		
		
		string word1=words[i];
		string word2=words[i+1];
		
		for(int j=0;j<min(word1.size(),word2.size());j++){
		//	cout<<1;
			if(word1[j]!=word2[j]){
				//cout<<1;
				cout<<word1[j];
				g[word1[j]-'a'].push_back(word2[j]-'a');
				break;
			}
		}
		
	}
	
	
	for(int i=0;i<n;i++){
		
		for(auto x:g[i]){
		//	cout<<1;
			indegree[x]++;
		}
		
	}
	
	for(int i=0;i<n;i++){
	//	cout<<1;
		if(indegree[i]==0)
		q.push(i);
	}
	
	int cnt=0;
	
	while(!q.empty()){
		
		cnt++;
		
		int u=q.front();
		q.pop();
		ans+='a'+ u;
		
		for(auto x: g[u]){
			
			indegree[x]=indegree[x]--;
			
			if(indegree[x]==0)
			q.push(x);
		}
		
	}
	
//	
//	if(cnt !=n){
//		cout<<"no top sort exisits";
//		return 0;
//	}
	
	
	cout<<ans;
	
}
// fml
