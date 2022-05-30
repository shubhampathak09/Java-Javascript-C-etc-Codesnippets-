#include<bits/stdc++.h>
using namespace std;

int highest_mountain(vector<int>a){
  int largest=0;
        
        int n=a.size();
        
        for(int i=1;i<=a.size()-2;i++)
        {
            
            
            if(a[i]>a[i+1]&&a[i]>a[i-1])
            {
                int cnt=1;
                
                int j=i;
                
                while(j>=1&&a[j]>a[j-1]){
                    j--;
                    cnt++;
                }
                
                while(i<=n-2 && a[i]>a[i+1]){
                    i++;
                    cnt++;
                }
                
                if(cnt>largest){
                    largest=cnt;
                }
            }
        }
        
        return largest;
}


int main()
{
	
vector<int>a={5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};

int ans=highest_mountain(a);

cout<<ans;	
	
	
}
