//Odd Even Multiple


#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	
	cin>>n;
	
	if(n%3!=0){
		
		cout<< -1<<endl;
		
	}else if(n%2!=0 && n%3==0){
		
		cout<< 1<<endl;
		
	}else if(n%2==0 &&n %3 ==0)
	{
		cout<< 0 <<endl;
	}
	
	
}
