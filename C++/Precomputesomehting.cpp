// find integger

#include<bits/stdc++.h>
using namespace std;


int compute(int n){
	
	
	int p=5;
	int count=0;
	
	while(n/p>0){
		
		count+=n/p;
		
		p=5*p;
		
	}
	
	return count;
}



int precompute(int k){
	
	
	int low=0;
	int high=INT_MAX;
//	
//	int cc=0;
//	
//	while(low<=high){
//		
//		
//		int mid=(low+high)/2;
//		
//		if(compute(mid)>k){
//			
//			high=mid-1;
//		}else if(compute(mid)<k){
//			low=mid+1;
//		}else
//		{
//				cc++;
//			if(compute(mid+1)>k){
//				high=mid-1;
//			}else if(compute(mid+1)==k){ // <=k
//				cc++;
//				low=mid+1;
//			}else
//			{
//				low=mid+1;
//			}
//		
//		}

while(low<high)
		{
			
			int mid=low+(high-low)/2;
			
			
			int count=compute(mid);
			
			if(count<k){
				low=mid+1;
			}else{
				high=mid;
			}
			
		}
	
	
	// or do another binary search
	vector<int>result;
	
	while(compute(low)==k){
		result.push_back(low);
		low++;
	}
	
	for(auto x:result)
	{
		cout<<x<<" ";
			}
	
	
	cout<<endl;
	
	return result.size();
	
	
	// similar problem koko wating bananas
	
}

int main()
{
	
	
int k=2;
int ans=precompute(k);

cout<<ans;	
	
}
