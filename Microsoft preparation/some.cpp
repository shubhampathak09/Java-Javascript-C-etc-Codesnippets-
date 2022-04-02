// test
#include<bits/stdc++.h>
using namespace std;

vector<int>retursome(int x){
	
	if(x>0)
	return vector<int>{2,3};
	else
	return vector<int>{0,0};
}

int main()
{
	
	vector<int>some=retursome(6);
	
	
	for(int i=0;i<some.size();i++)
	{
		cout<<some[i]<<" ";
	}
}
