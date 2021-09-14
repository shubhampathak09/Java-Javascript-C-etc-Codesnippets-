// chef attendence

#include<bits/stdc++.h>
using namespace std;


int countbits(int a){
	
	int cc=0;;
	
	while(a!=0){
		
		if(a&1){
			cc++;
		}
		a=a>>1;
	}
	return cc;
}

int countbitsbinary(string s){
	
	int cc=0;
	
	 for(auto x:s){
	 	if(x=='1')
	 	cc++;
	 }

return cc;
}

int main()
{
	int t;
	
	cin>>t;
	
	while(t--){
	
	
	int n;
	
	cin>>n;
	
	
	
	string a;
	
	cin>>a;
	
	int x=countbitsbinary(a);
	
	
	
	
//    cout<<x;
    
	
	if((120-n)+x>=90){
		cout<<"YES";}
	else
	{
		cout<<"NO";
		}
			
	cout<<endl;
}
	
	}
	
//	cout<<x;

