#include<bits/stdc++.h>
using namespace std;

int main(){
	
	
	vector<int>a={1,9,3,0,18,5,2,4,10,7,12,6};
	//0 1 2 3 4 5 6 7
	
	int n=a.size();
	
	unordered_set<int>s;
	
	
	for(int i=0;i<a.size();i++){
		
		s.insert(a[i]);
		
	}
	
	
	int largest=0;
	
	
	for(auto x:a){
		
		int parent=x-1;
		
		if(s.find(parent)==s.end()){
			
			
			int next_no=x+1;
			int cnt=1;
			
			while(s.find(next_no)!=s.end()){
				next_no++;
				cnt++;
			}
			if(cnt>largest){
				largest=cnt;
			}
		}
		
	}
	
	cout<<largest;
}
