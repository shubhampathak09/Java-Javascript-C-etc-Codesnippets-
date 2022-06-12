//ANARC08G - Think I will Buy Me a Football Team


#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	
	cin>>n;
	
	
//	int mat[n][n];
	
	vector<int>a(n);
	
	int before=0;
	int after=0;
	
	for(int i=0;i<n;i++){
		
		for(int j=0;j<n;j++){
			
			int x;
			
			cin>>x;
		//	mat[i][j]=x;
			
			before+=x;
			
			a[i]+=x;
			
			a[j]-=x;
		}
	}
	
	for(int i=0;i<n;i++){
		if(a[i]>0)
		after+=a[i];
	}
	
	cout<<before<<" "<<after;
	
	 
}



/*
4
0 50 100 0
150 0 20 0
0 0 0 30
30 0 0 0
380 120
*/
