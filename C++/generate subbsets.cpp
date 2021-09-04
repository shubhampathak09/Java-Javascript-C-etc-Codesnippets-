////.. generate subsets
//
//#include<bits/stdc++.h>
//using namespace std;
//
//void genratesubsets(int a[],int i,int n){
//	
//	if(i==n)
//	{
//	//	cout<<endl;
//		return ;
//	}
//	
//	  genratesubsets(a,i+1,n);
//	cout<<a[i];
//	genratesubsets(a,i+1,n);
//}
//
//int main()
//{
//	
//	int a[]={1,2,3,4,5,6};
//	
//	int n=sizeof(a)/sizeof(a[0]);
//	
//	   genratesubsets(a,0,n);
//	
//	
//}

#include<bits/stdc++.h>
using namespace std;


vector<int>subsets;


void generate(vector<int>&subsets,int i,int a[],int n){
	
	for(int i=0;i<subsets.size();i++)
	{
		cout<<subsets[i]<<endl;
		
	}
	
	for(int i=0;i<n;i++)
	{
		
	subsets.push_back(a[i]);	
		
	generate(subsets,i+1,a,n);
	
	subsets.pop_back();	
	}
	
	return;
}

int main()
{
	
	int a[]={1,2,3,4,5,6};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	generate(subsets,0,a,n);
}

