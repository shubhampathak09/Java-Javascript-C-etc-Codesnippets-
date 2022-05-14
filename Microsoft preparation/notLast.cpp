// Not Last

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	
	int n;
	
	
	cin>>n;
	int ct=0;
	int sl=-1;
	int l=-1;
	while(n!=0){
		 l=n%10;
		 
		ct++;
		if(ct==2){
			sl=l;
			break;
		}
		n=n/10;
	}
	if(sl==-1){
		cout<<"The number is less than 2 digits";
	}
	else
	{
		if(sl==7){
			cout<<1<<endl;
		}else
		{
			cout<<0;
		}
	}
}

