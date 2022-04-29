// chcke

#include<bits/stdc++.h>
using namespace std;



bool permuteAndFind(vector<long>power,int idx,long sum,int target){
	
	
	if(idx==power.size()){
		
		if(sum==target)
		{
			return true;
		}
		
		return false;
	}
	
	
	bool select=permuteAndFind(power,idx+1,sum+power[idx],target);
	
	
	bool notselect=permuteAndFind(power,idx+1,sum,target);
	
	
	return select || notselect;
	
}

int main(){
	
	
	vector<long>power(16);
	
	power[0]=1;
	
	for(int i=1;i<16;i++){
		power[i]=3*power[i-1];
	}
	
	
	int n;
	cin>>n;
	int sum=0;
	
	bool found=permuteAndFind(power,0,sum,n);
	
	
	if(found==true)
	{
		cout<<"Yes";
		return 0;
	}else
	{
		cout<<"No";
		return 0;
	}
	
	
}
