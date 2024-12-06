#include<bits/stdc++.h>
using namespace std;


void printvector(vector<int> a){
	
	for(int x : a){
		cout<<x<<" ";
	}
	
}

int main(){
	
	ifstream file("Day2.txt");
	
	string str;
	
	int answer =0;
	
	
	while(getline(file,str)){
		
		istringstream ss(str);
		
		int num;
		
		vector<int>a;
		
		while(ss >> num)
		{
			a.push_back(num);
		}
		
		
		
	//	printvector(a);
	
	    int k = (int) a.size();
	    bool ok = true;
	    bool only_inc = true;
	    bool only_dec = true;
	    for(int j =0 ;j<k-1;j++){
	    	int diff = a[j+1] -a[j];
	    	if(diff > 0){
	    		only_dec =false;
			}
			if(diff < 0){
				only_inc =false;
			}
	    	if(!(1 <=abs(diff) && abs(diff) <=3)){
	    		ok = false;
	    		break;
			}
		}
	
	    if(ok && (only_inc || only_dec)){
	    	answer++;
		}
	
	
		
	//	cout<<endl;
		
		
		}
		
		cout<<answer;
}
