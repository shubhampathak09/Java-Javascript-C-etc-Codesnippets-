
// fruits baskert

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	
	vector<int>a={
 1,2,3,2,2}
	;
	int n=a.size();
	
	
	int i=0;
	
	map<int, int>mp;
	
	int maxlen=0;
	
	for(int j=0;j<n;j++){
		
		mp[a[j]]++;
		while(mp.size()>2){
			
			mp[a[i]]=mp[a[i]]-1;
			
			if(mp[a[i]]==0)
			mp.erase(a[i]);
			i=i+1;
		}
	//	if(mp.size()==2)
		maxlen=max(maxlen,j-i+1);
	}
	
	cout<<maxlen;
}
