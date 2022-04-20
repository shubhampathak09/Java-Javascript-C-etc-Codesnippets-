#include<bits/stdc++.h>
using namespace std;

int f(string s1){
  int res=0;
  
  for(int i=0;i<s1.length();i++){
  	
  	int pp=pow(10,s1.length()-1-i);
  	
  
  	int dd=s1[i]-'0';
    	cout<<pp<<" "<<dd<<endl;	
  	
    res+=pp*dd;
  }
  return res;
}

int main(){
	
	
	cout<<f("5150");
}
