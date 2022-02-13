// strings basics

#include<bits/stdc++.h>
using namespace std;


int main(){
	
	
	// char s[1000]={'1','a','b'};
	
	string s;  //Dynamic Array
	
	//s="hello world";
	
	//getline(cin,s);  //using getline
	
	// argumet with delimiter
	
	getline(cin,s,'.'); // third argument tell function when to stop
	
	
	for(char ch:s){
		cout<<ch<<",";
	}
	
	//vector<string> 
	
	
	int n=5;

/*	
	while(n--){
		
		string temp;
		//cin>>temp;
		getline(cin,temp);
		sarr.push_back(temp);
	}
*/
	
	cout<<s<<endl;
	
	
	
}
