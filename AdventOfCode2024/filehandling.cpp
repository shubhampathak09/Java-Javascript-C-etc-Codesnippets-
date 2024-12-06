#include<bits/stdc++.h>
using namespace std;

int main(){
	ifstream file("sample.txt");
	
	string str;
	
//	while(getline(file,str))
	
	for(int i=0;i<6;i++)
	{
		
		istringstream ss(str);
		int num;
		
		while(ss >>num){
			
			cout<<num <<" ";
		}
		cout<<endl;
	}
}
