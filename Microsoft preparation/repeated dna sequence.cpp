// repeated dna sequence

#include<bits/stdc++.h>
using namespace std;


int countset(int n){
	
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
	
	 string s="AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT";
	
	int n=s.length();
	
	
	long long mask=1<<n;
	
	cout<<mask;
	
	map<string,int>mp;
	
	for(int i=0;i<mask;i++){
		
		int crmask=i;
	    if(countset(crmask)==10)
		  {
		  //	cout<<crmask;
			string crr=""; 	
		for(int j=0;j<s.length();j++){
			if(crmask & (1<<j)){
				crr+=s[j];			}
		}
		mp[crr]++;
	}
	}
	
	  //cout<<mp.size();
	///  cout<<countset(7);
	  
}
