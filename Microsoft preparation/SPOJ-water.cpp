// water among cubes spoj
/*
WATER - Water among Cubes
#bfs
On a rectangular mesh comprising n*m fields, n*m cuboids were put, one cuboid on each field. A base of each cuboid covers one field and its surface equals to one square inch. Cuboids on adjacent fields adhere one to another so close that there are no gaps between them. A heavy rain pelted on a construction so that in some areas puddles of water appeared. 

Task
Write a program which: 

reads from the standard input a size of the chessboard and heights of cuboids put on the fields,
computes maximal water volume, which may gather in puddles after the rain,
writes results in the standard output.
Input
The number of test cases t is in the first line of input, then t test cases follow separated by an empty line. In the first line of each test case two positive integers 1 <= n <= 100, 1 <= m <= 100 are written. They are the size of the mesh. In each of the following n lines there are m integers from the interval [1..10000]; i-th number in j-th line denotes a height of a cuboid given in inches put on the field in the i-th column and j-th raw of the chessboard.

Output

Sample input:
1
3 6
3 3 4 4 4 2
3 1 3 2 1 4
7 3 1 6 4 1

Sample output:
5
*/



#include<bits/stdc++.h>
using namespace std;

int main(){
	
	
vector<vector<int>>mat={{3,3,4,4,4,2},{3,1,3,2,1,4},{7,3,1,6,4,1}};


int n=mat.size();
int m=mat[0].size();


vector<vector<bool>>visited(n,vector<bool>(m));

priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;

for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		if(i==0 ||j==0 ||i==n-1 || j==m-1)
		{
			pq.push({mat[i][j],{i,j}});
			visited[i][j]=1;
		}
	}
}	

int res=0;

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

while(!pq.empty()){
	auto p=pq.top();
	pq.pop();
	int val=p.first;
	int x=p.second.first;
	int y=p.second.second;
	
	
	for(int i=0;i<4;i++){
	 int newx=x+dx[i];
	  	int newy=y+dy[i];
	  	
	  	if(newx<0 || newx>=n || newy<0 ||newy>=m|| visited[newx][newy]==1) continue;
	  	visited[newx][newy]=1;
	  	
	  	res+=max(0,val-mat[newx][newy]);
	  	
	  	pq.push({max(val,mat[newx][newy]),{newx,newy}});
		
		
		
	}
	
//	cout<<res;
}

cout<<res;	
}
