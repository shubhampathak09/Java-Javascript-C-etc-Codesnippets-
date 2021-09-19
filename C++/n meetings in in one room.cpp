// n meetings in one room

// 0 1 3 5 5 8

// 6 2 4 7 9 9


#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>p1,pair<int,int>p2){
	
	 
		return p1.second<p2.second;
		
 
 
}


int main()
{
	
int start[]={1,3,0,5,8,5};

int end[]={2,4,6,7,9,9};


int n=6;

pair<int,int> meeting[n];

for(int i=0;i<n;i++)
{
	
	pair<int,int>p={start[i],end[i]};
	
	meeting[i]=p;
}

sort(meeting,meeting+n,cmp);	


//for(int i=0;i<n;i++)
//{
//	cout<<meeting[i].first<<" "<<meeting[i].second<<endl;
//}
//	
	
	int st=meeting[0].first;
	
	int en=meeting[0].second;
	
	int cnt=1  ;
	int mxount=0;
	
	for(int i=1;i<n;i++)
	{
	//	cout<<en<<endl;
		if(en<=meeting[i].first){
		//	cout<<meeting[i].first<<" "<<meeting[i].second<<endl;
			cnt=cnt+1;
		//	cout<<cnt<<endl;
			en=meeting[i].second;
		//	mxcount=max(mxcount,cnt);
		}
		else{
		//	cnt=1;
		//	en=meeting[i].second;
		}
//		else{
//			
//			cnt=1;
//		}
	}
//	cout<<en<<" ";
	cout<<"Total Number of possible meetings are:- "<<cnt;
	//fml
}

// fixed --
