#include<bits/stdc++.h>
using namespace std;




int main(){
	
vector<int>a={1,7,8,9};

int n=a.size();

int carry=(a[n-1]+1)/10;
a[n-1]=(a[n-1]+1)%10;


for(int i=n-2;i>=0;i--){
	
	if(carry==1){
		
		carry=(a[i]+1)/10;
		a[i]=(a[i]+1)%10;
		
	}
	
}	
if(carry==1)
a.insert(a.begin(),1);


for(int i=0;i<a.size();i++){
	cout<<a[i]<<" ";
}
	
}
