#include<bits/stdc++.h>
using namespace std;


bool ispalindrome(string s,int low,int high){
	
	while(low<=high){
	//	cout<<"cfdc";
		if(s[low]!=s[high]){
			return false;
		}
		low++;
		high--;
	}
	return true;
	
}


void prinallpal(vector<vector<string>>&allpath,vector<string>&cur,int start,int n,string str){
	
if(start>=n){
	
	allpath.push_back(cur);
	return;
}	
	
for(int i=start;i<n;i++){
	
	if(ispalindrome(str,start,i)){
		
		cur.push_back(str.substr(start,i-start+1));
		
		prinallpal(allpath,cur,i+1,n,str);
		
		cur.pop_back();
	}
	
}	
	
}

int main(){
	
	
	
	string word="nitin";
	
	vector<vector<string>>vp;
	
	vector<string>res;
	
	prinallpal(vp,res,0,word.length(),word);
	
	
	
	
	for(int i=0;i<vp.size();i++){
		for(int j=0;j<vp[i].size();i++)
		{
			cout<<vp[i][j]<<" ";
			cout<<endl;
		}
	}
	
	
}
