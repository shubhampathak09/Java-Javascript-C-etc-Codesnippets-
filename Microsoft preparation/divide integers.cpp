// divide tow integers

#include<bits/stdc++.h>
using namespace std;

 int solve(int a,int b){
 	
 	int sign=1;
 	
 	
 	if(a<0 && b <0)
 	a=a*-1;
 	b=b*-1;
 	
 	if(a<0 || b < 0)
 	sign=-1;
 	
 	a=abs(a);
 	b=abs(b);
    
	int q=0;
	while(a>=b){
		a=a-b;
		q++;
	}
	return q;	
 }

int main(){
	
	int a=17;
	int b=2;

    int q=0;
   while(a>=b){
   	
   	a=a-b;
   	q++;
   	
   }	
   
   cout<<q<<endl;
   	
	cout<<solve(11,3);
}
