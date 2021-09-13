#include<bits/stdc++.h>
using namespace std;


//LLONG_MAX

int tz(int n)
{
	
	int count=0;
	
	long long p=5;
	
	while(n/p>0){
		
		count+=n/p;
		p=5*p;
		
	}
	return count;
	
}

//
// int preimageSizeFZF(int k) {
//        
//        
//        long long low=0;
//        long long high=1e18;
//        
//        while(low<high){
//            
//            long long mid=(low)+(high-low)/2;
//            
//            if(tz(mid)<k){
//                low=mid+1;
//            }else
//            {
//                high=mid;
//            }
//            
//        }
//        
//        
//        int cc=0;
//        
//        
//        while(tz(low)==k){
//            cc++;
//            low++;
//        }
//        
//        return cc;
//    }
//

//
//int countoc(int low,int high,int x)
//{
//	int count=0;
//	
//	
//	while(low<=high){
//		
//		int mid=(low+high)/2;
//		
//		if(tz(mid)<x){
//			low=mid+1;
//		}else if(tz(mid)>x){
//			high=mid-1;
//		}else
//		{
//			cout<<1;
//			count++;
//		}
//		
//		
//	}
//	
//	return count;
//}


int precompute(int k)
{
	
	int low=0;
	
	int high=INT_MAX;
	
	
	while(low<high){
		
		
		int mid=(low+(high-low)/2);
		
		if(tz(mid)<k){
			low=mid+1;
		}else{
			high=mid;
		}
		
	}


//cout<<low<<" "<<tz(low);
int cc=0;

    while(tz(low)==k){
    //	cout<<endl;
    	
    //	cout<<low<<endl;
    	
    	cc++;
    	
    	low++;
	}

//cout<<cc;	
//	int ans=countoc(low,high,k);
	
	//cout<<low<<" "<<high;
	
	return cc;
	
}


int main()
{
	
	//cout<<tz(2)<<" "<<tz(3)<<""<<tz(5)<<" "<<tz(6)
	
	
	//cout<<tz(INT_MAX);
	
	cout<<precompute(2);

;}
