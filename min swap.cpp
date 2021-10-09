
//tt 1
/*3 4 1 2 5
0 1 2 3 4

1 2 3 4 5

2 3 0 1 4

0 1 2 3 4

0 t c=1
2 t c=2  ans=1
1 t c=1
4 t c=2
*/

// ap uunderstand_1

#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	
	vector<int>a={3,4,1,2,5};
	
	
	vector<pair<int,int>>a1;  // this will error if not intialisze
	
	a1.resize(a.size());
	
//	pair<int,int>aa={1,2};
	
//	cout<<aa.first<<aa.second;
	
//	cout<<a.size();
	for(int i=0;i<a.size();i++)
	{
		a1[i].first=a[i];
		a1[i].second=i;
	 
		//cout<<a[i]; 
		//cout<<a1[i].first<<a1[i].second;
	}
	
	int n=a1.size();
	
	
	for(int i=0;i<a.size();i++)
	{
		cout<<a1[i].first<<" "<<a1[i].second;
		cout<<endl;
	}
	
	sort(a1.begin(),a1.end());
	
	
	for(int i=0;i<n;i++)
	{
		cout<<a1[i].first<<" "<<a1[i].second;
		cout<<endl;
	}
	
	
	vector<bool>visited(n,false);
	int ans=0;
	
	for(int i=0;i<n;i++)
	{
		int old_pos=a1[i].second;
		
		
		if(visited[i]==true||i==old_pos)
		continue;
		
		int node=i;
		int cycle=0;
		
		while(!visited[node])
		{
			visited[node]=true;
			cycle+=1;
			int nextnode=a1[node].second;
			node=nextnode;
		}
	//	cout
		ans+=(cycle-1);
	}
	
	
	cout<<"Min swaps needed to sort is.."<<ans;
	
    // int node=a1[i].second;
	 
	 	// try solve by graphs
	 	
	
}
