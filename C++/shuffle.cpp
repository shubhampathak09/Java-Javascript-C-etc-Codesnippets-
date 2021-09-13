//shuffle the array

#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	
	vector<int>a={1,2,3,4};
	
	vector<vector<int>>res;
	
	
	do{
		
		res.push_back(a);
		
	}while(next_permutation(a.begin(),a.end()));
	
	
	
	
	
	
	cout<<res.size();
	
	
	int m=res.size();  //24   0 to 23
	
	srand(time(0));
	
	cout<<endl;
	
	for(int i=0;i<100;i++){
	
	int x=rand()%m;

    for(auto aa:res[x]){
    	
    	cout<<aa<<" ";
    	
	}cout<<endl;
    
	//cout<<x<<endl;
}
}
