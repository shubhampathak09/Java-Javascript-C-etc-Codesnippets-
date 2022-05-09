// NUMBER OF SQUARE THAT SHARE SIDE WITH (r,c)


#include<bits/stdc++.h>
using namespace std;

int main(){
	
	
	int h,w;
	int r,c;
	
	cin>>h>>w;
	cin>>r>>c;
	
	
	int cnt=0;
	
	
	if(r+1>=1&&r+1<=h&&c>=1&&c<=w)
	cnt++;
	
	if(r-1>=1&&r-1<=h&&c>=1&&c<=w)
	cnt++;
	
	if(r>=1&&r<=h&&c+1>=1&&c+1<=w)
	cnt++;
	
	if(r>=1&&r<=h&&c-1>=1&&c-1<=w)
	cnt++;
	
	cout<<cnt;
	
	
	
}
