// transpose of matrix

#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	 vector<vector<int>>m={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	
	
	cout<<m.size();
	cout<<m[0].size();
	
	for(int i=0;i<m.size();i++){
		
		for(int j=0;j<m[i].size();i++){
			
			cout<<m[i][j]<<" ";
			
			
		}
		cout<<endl;
	}
	
	
	
}
