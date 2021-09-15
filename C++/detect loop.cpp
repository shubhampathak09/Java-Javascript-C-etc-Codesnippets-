#include<bits/stdc++.h>
using namespace  std;


int main()
{
	
	
 vector<int> a={8,1,2,2,3};
 
 
 vector<int>result;
 
 
 for(int i=0;i<a.size();i++)
 {
 	
 	int ct=0;
 	
 	for(int j=0;j<a.size();j++)
 	{
 		
 		if(j!=i)
 		{
		 
 		if(a[j]<a[i]){
 			
 	     ct++;		
 			
		 }
 	}
	 }
 	result.push_back(ct);
 	
 }
 
 
 for(auto x:result)
 {
 	
 	cout<<x<<" ";
 }
}
