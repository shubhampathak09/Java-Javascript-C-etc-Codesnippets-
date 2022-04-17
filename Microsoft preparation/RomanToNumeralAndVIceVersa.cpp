#include <string>
#include<bits/stdc++.h>
using namespace std;
class RomanHelper{
  public:
    std::string to_roman(unsigned int n){
      
         vector<string>M={"","M","MM","MMM"};

    vector<string>C={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};

    vector<string>L={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};

    vector<string>X={"","I","II","III","IV","V","VI","VII","VIII","IX"};
 
    string th=M[n/1000];

    string hh=C[(n%1000)/100];

    string ten=  L[((n%1000)%100)/10];

    string one= X[n%10];
 
       
        return th+hh+ten+one; 
      
      
    }
    int from_roman(std::string rn){
      
      map<char,int>mp;
      mp['I']=1;
      mp['V']=5;
      mp['X']=10;
      mp['L']=50;
      mp['C']=100;
      mp['D']=500;
      mp['M']=1000;
      
         int sum=0;
         
         for(int i=0;i<rn.length();i++  ){
              if(mp[rn[i+1]]>mp[rn[i]]){
                sum+=mp[rn[i+1]]-mp[rn[i]];
                i++;
                continue;
            }
           sum+=mp[rn[i]];
         }
      
      return sum;
    }
}  
