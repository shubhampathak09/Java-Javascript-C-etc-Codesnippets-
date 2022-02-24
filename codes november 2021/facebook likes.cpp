#include<bits/stdc++.h>
using namespace std;


void solve(vector<string>likes){
	
	
	if(likes.size()==0){
		
		cout<<"no one likes this"<<endl;
		return;
	}
	else
	{
		if(likes.size()==1){
			cout<<likes[0]<<" likes this"<<endl;
		
		
		}
		else if(likes.size()==2){
			
			cout<<likes[0]<<" and "<<likes[1]<<" like this"<<endl;
			 
			
		}
		else if(likes.size()==3){
			
			cout<<likes[0]<<","<<" "<<likes[1]<<" and "<<likes[2]<<" like this"<<endl;
		 
			
		}
		else
		{
			cout<<likes[0]<<","<<" "<<likes[1]<<" and "<<likes.size()-2<<" other like this"<<endl;
		 
		}
		return;
		
	}
	
	
}

// test cases


// [] -> no one likes this
//["Peter"] -> "Peter likes this"




int main()
{
	
//	vector<string>likes={"Alex","Jacob","Mark","Max","katrina"};

    vector<string>likes;

    solve(likes); 
   	
}
