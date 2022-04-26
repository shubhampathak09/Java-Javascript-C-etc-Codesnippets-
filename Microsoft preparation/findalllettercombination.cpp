// letter keypad combination

#include<bits/stdc++.h>
using namespace std;




void findallComb(vector<char>keypad[],string input,string res,int index,int n){
	
	
	if(index==n){
		
		
		cout<<res<<endl;
		return;
		
	}
	int digit=input[index]-'0';
	
	int len=keypad[digit].size();
	
	for(int i=0;i<len;i++){
		
		
		
	//	res.push_back(ss);
		
		res+=keypad[digit][i];
		
		findallComb(keypad,input,res,index+1,n);
		
		res.pop_back();
	}
	
}

int main(){
	
	
	vector<char> keypad[]={
	{},{},
	{'a','b','c'},
	{
	'd','e','f'	
	},{
		'g','h','i'
	},{
		'j','k','l'
	},{
		'm','n','o'
	},{
		'p','q','r','s'
	},{
		't','u','v'
	},{
		'w','x','y','z'
	}
			
	};



string input="23";

int n=input.length();

findallComb(keypad,input,"",0,n);

}


