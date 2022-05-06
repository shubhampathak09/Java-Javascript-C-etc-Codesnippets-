#include<bits/stdc++.h>
using namespace std;



int main(){
	
int a[4][4]={{1,2,3,4},{4,5,6,7},{8,9,10,11},{12,13,14,15}};

	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			
			cout<<a[i][j]<<" ";
			
			
		}
		cout<<endl;
	}
	
	for(int i=0;i<4;i++){
		for(int j=i+1;j<4;j++){
			swap(a[i][j],a[j][i]);
		}
	}
	
	cout<<endl;
	
		for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			
			cout<<a[i][j]<<" ";
			
			
		}
		cout<<endl;
	}
	
	for(int i=0;i<4;i++){
		
		for(int j=0;j<4 ;j++){
			
			int cr=i;
			
			swap(a[cr][j],a[cr][3-j]);
		}
	}
	
	cout<<endl;
	
	for(int i=0;i<4;i++){
		
		int li=0;
		int ri=3;
		
		while(li<=ri){
			
			int temp=a[i][li];
			a[i][li]=a[i][ri];
			a[i][ri]=temp;
			li++;
			ri--;
		}
		
	}
	
		for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			
			cout<<a[i][j]<<" ";
			
			
		}
		cout<<endl;
	} 
}
