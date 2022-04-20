#include<bits/stdc++.h>
using namespace std;

 
 string convert(int x){
 
    if(x>=255)
      return "FF";
    
    if(x<=0)
      return "00";
    
    map<int,string>mp;
    
    mp[0]="00";
    mp[1]="01";
    mp[2]="02";
    mp[3]="03";
    mp[4]="04";
    mp[5]="05";
    mp[6]="06";
    mp[7]="07";
    mp[8]="08";
    mp[9]="09";
    mp[10]="A";
    mp[11]="B";
    mp[12]="C";
    mp[13]="D";
    mp[14]="E";
    mp[15]="F";
    
    
    stack<string>s;
    while(x>0){
      
      cout<<1;
      int q=x/16;
      int r=x%16;
      s.push(mp[r]);
      x=q;
    }
    string res="";
    while(!s.empty()){
      
      res+=s.top();
      s.pop();
    }
    return res;
}

int main(){
	
cout<<convert(181);
}
