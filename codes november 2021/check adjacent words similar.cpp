#include<bits/stdc++.h>
using namespace std;

//yes

bool isadj(string a,string b){
	
	
	int ct=0;
	
	for(int i=0;i<a.length();i++){
		
		if(a[i]!=b[i])
		ct++;
		
	}
	
	if(ct==1)
	{
		return true;
	}else
	{
		return false;
	}
	
}

int main()
{
	
	cout<<isadj("SPOON","SPOOO")<<endl;
	
	cout<<isadj("SPOON","QUIET")<<endl;
	
}
