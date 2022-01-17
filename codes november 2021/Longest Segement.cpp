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

vector<pair<int,int>>vp;

//vp.resize(n);
//cout<<sqrt(16);

for(int i=0;i<n;i++){
	
	
	int a,b;
	
	cin>>a>>b;
	
	pair<int,int> p={a,b};
	
//	cout<<p.first<<" "<<p.second;
	
	vp.push_back(p);
	
 
}

cout<<vp[0].first<<" "<<vp[0].second;

	//float maxdist=sqrt((vp[0].first-vp[1].first)*(vp[0].first-vp[1].first)+(vp[0].second-vp[1].second)*(vp[0].second-vp[1].second));
	
	
	double ans=0;
	
	
for(int i=0;i<n;i++){
	
	for(int j=i+1;j<n;j++){
		
		double x1=vp[i].first;
		double x2=vp[j].first;
		double y1=vp[i].second;
		double y2=vp[j].second;
		
		cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
		
		double dist=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
		
		ans=max(ans,dist);
	}
	
}

cout<<ans;	
}


// wierd behavio wirth vector<pair<int,int>>vp(n);
/*
3
0 0
1 1
0 1
*/ // sample i/0
