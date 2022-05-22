//

#include<bits/stdc++.h>
using namespace std;


int cbit(int n){
	
	int ct=0;
	while(n>0){
		if(n & 1){
			ct++;
		}
		n=n>>1;
	}

     return ct;
	 	
}

int main(){
	
	
	vector<int> a={2,5,6,1,9};
	
//	cout<<n;
	
	int n=a.size();
	
	int mask=(1<<n);
	
	
	for(int i=0;i<mask;i++){
		
		int crmask=i;
		
		
			if(cbit(crmask)==2)
			{
		//	cout<<"curren mask"<< crmask<<endl;
			for(int j=0;j<a.size();j++){
				if(crmask & (1<<j))
				{
					cout<<a[j]<<" ";
					
				}
			}
			cout<<endl;
			
			}
			
	}
	}
	
	

