#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int seconds=359999;
	
	
	int hrsec=3600;
	
	int minsec=60;
	
	
	
	string hs=to_string(seconds/hrsec);
	
	
	string ms=to_string((seconds%hrsec)/minsec);
	
	string ss=to_string(seconds%minsec);
	
	
	if(hs.length()==1){
		
		hs= "0"+hs;
		
	}
	
	if(ms.length()==1){
		ms="0"+ms;
		
	}
	
	if(ss.length()==1){
		ss="0"+ss;
	}
	
	
	cout<< hs + ":" + ms +":" +ss;
}
