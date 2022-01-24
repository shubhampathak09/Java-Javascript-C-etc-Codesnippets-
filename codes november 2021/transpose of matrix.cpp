// transpose of matrix

#include<bits/stdc++.h>
using namespace std;


void print(vector<vector<int>>m)
{
	
		for(int i=0;i<m.size();i++){
		
		for(int j=0;j<m[i].size();j++){
			
			cout<<m[i][j]<<" ";
			
			
		}
		cout<<endl;
	}
	
}

int main()
{
	
	 vector<vector<int>>m={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	
	
//	cout<<m.size();
	//cout<<m[0].size();
	
	cout<<"intial matrix.."<<endl;
	
print(m);
	
    cout<< "Printing the tranpose"<<endl;
	
	
    for(int i=0;i<m.size();i++){
    	   	
    	for(int j=i;j<m[i].size();j++){
    		
    		int temp=m[i][j];
    		m[i][j]=m[j][i];
    		m[j][i]=temp;
    		
    		
		}
    	
	}		
	print(m);
}
