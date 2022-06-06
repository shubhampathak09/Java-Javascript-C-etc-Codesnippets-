// sub array sort
#include<bits/stdc++.h>
using namespace std;

int main(){
	
	
	vector<int>a={1,2,8,9,3,4,2};
	vector<int>b(a);
	
	sort(a.begin(),a.end());
	
	
	
	int i=0;
	
	while(i<a.size()&&a[i]==b[i]){
		i++;
	}
	int j=a.size()-1;
	
	while(j>=0 && a[j]==b[j])
	{
		j--;
	}
	
	
	if(i==a.size()){
		cout<<-1<<" "<<-1;
		return 0;
	}
	
	
	
	cout<< i<<" "<<j<<endl;
	
	return 0;
	
}
