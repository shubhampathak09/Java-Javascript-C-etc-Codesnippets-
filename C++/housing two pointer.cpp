#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int a[]={1,3,2,1,4,1,3,2,1,1,1,2};
	
	
	int n=sizeof(a)/sizeof(a[0]);
	
	vector<pair<int,int>>vp;
	
	
	int i=-1,j=-1;
	
	int sum=0;
	
	
	while(true){

bool flag1=false;
bool flag2=false;		
	
	while(i<n-1)
	{
		
		i++;
		
	    sum+=a[i];
		if(sum==8)
		{
			pair<int,int>p={j+1,i};
			vp.push_back(p);
			}else if(sum>8)
			{
				break;
				}	
		
		flag1=true;
	}
	while(j<i){
		
		j++;
		sum=sum-a[j];
		if(sum==8){
			pair<int,int>p={j+1,i};
			vp.push_back(p);
		}else if(sum<8){
			break;
		}
		
		flag2=true;
	}
	
	
	if(flag1==false&&flag2==false)
	{
		break;
	}
}

for(auto x:vp){
	
	cout<<x.first<<" "<<x.second<<endl;
	
}

}
