/*
This problem is to implement disjoint set union.
 There will be 2 incomplete functions namely union and find.
  You have to complete these functions. 

Union: Join two subsets into a single set.
isConnected:
 Determine which subset a particular element is in.
  This can be used for determining if two 
  elements are in same subset.

Example 1:

Input:
N = 5
q = 4
Queries = 
Union(1,3)
isConnected(1,2)
Union(1,5)
isConnected(3,5)
Output:
0
1
Explanation: Initially all nodes 1 2 3 4 5
are not connected. 
After Union(1,3), node 1 and 3 will be
connected.
When we do isConnected(1,2),  as node 1
and 2 are not connected it will return 0.
After Union(1,5), node 1 and 5 will be
connected.
When we do isConnected(3,5),  as node
1 and 3 are connected, and node 1 and 5
are connected, hence 3 and 5 are
connected. Thus it will return 1.
Example 2:

Input:
N = 5
q = 4
Queries = 
Union(1,4)
Union(1,5)
isConnected(2,3)
Union(3,4)
Output: 0
*/

#include<bits/stdc++.h>
using namespace std;


int _find(vector<int>parent, int x){
	
	if(parent[x]==-1){
		return x;
	}
	return _find(parent,parent[x]);
}

void _union(int a,int b,vector<int>parent){
	
	parent[b]=a;
}

int isConnected(int a,int b,vector<int>parent){
    	if(parent[a]==-1 && parent[b]==-1)
	return 0;
   
	if(parent[a]==parent[b])
	return 1;
	

	
	return 0;
}

int main(){
	
	int n,m;
	
	cin>>n>>m;
	
	vector<int>parent(n+1,-1);
	
	_union(1,4,parent);
	
	_union(1,5,parent);
	
	cout<<isConnected(2,3,parent);
	_union(3,4,parent);
	
	
	
	
	
}
