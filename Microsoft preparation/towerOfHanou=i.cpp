#include<bits/stdc++.h>
using namespace  std;

void towerOfHanoi(int n,char from,char to, char helper){
	
	if(n==0)
	return;
	
	towerOfHanoi(n-1,from,helper,to);
	
	cout<<from<<" "<<"->"<<" "<<to<<endl;
	
	towerOfHanoi(n-1,helper,to,from);
	
	
}

int main()
{
	char from='A';
	char to='C';
	char helper='B';
	
	towerOfHanoi(2,from,to,helper);
	
}
