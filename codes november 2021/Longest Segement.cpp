/*Problem Statement
There are N points in a two-dimensional plane. The coordinates of the i-th point are 
(x i   ,y  i   ).
Find the maximum length of a segment connecting two of these points.
*/

/*
3
0 0
0 1
1 1
*/
#include<bits/stdc++.h>
using namespace std;


int main()
{


int n;

cin>>n;

vector<pair<int,int>>vp(n);

//cout<<sqrt(16);

for(int i=0;i<n;i++){
	
	
	int a,b;
	
	cin>>a>>b;
	
	vp.push_back({a,b});
	
	
}
	float maxdist=sqrt((vp[0].first-vp[1].first)*(vp[0].first-vp[1].first)+(vp[0].second-vp[1].second)*(vp[0].second-vp[1].second));
	
	
	
for(int i=0;i<n;i++){
	
	for(int j=i+1;j<n;j++){
		
		int x1=vp[i].first;
		int x2=vp[j].first;
		int y1=vp[i].second;
		int y2=vp[j].second;
		
		double dist=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
		
		if(maxdist<dist){
			maxdist=dist;
		}
	}
	
}

cout<<maxdist;	
}
