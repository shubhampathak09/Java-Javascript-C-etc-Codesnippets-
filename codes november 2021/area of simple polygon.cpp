#include<bits/stdc++.h>
using namespace std;

const int N=1000;

long long x[N+1],y[N+1];





int main()
{
	
int n;
cin>>n;

for(int i=1;i<=n;i++){
	cin>>x[i]>>y[i];
	
}	

long long result=0;


for(int i=1;i<=n;i++){
	
	int j=i+1;
	if(i==n)
	j=1;
	
	result+=(y[i]+y[j])*(x[i]-x[j]);
	
}
	cout<< abs(result);
	
}
