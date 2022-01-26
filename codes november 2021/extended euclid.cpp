// extended Euclidean algorithm

// (u,v)


// u.x +u.y=gcd(u,v);



#include<bits/stdc++.h>
using namespace std;


int gcd(int a,int b){
	
	return a%b==0 ? b : gcd(b,a%b);
	
}

int main(){
	
	
	int u,v;
	
	cin>>u>>v;
	
	
	int _gcd=gcd(u,v);
	
	
	// finding x and y in (1,100) st u.x+v.y=gcd(u,v)
	
	
	int count=0;
	
	for(int x=1,y=1;x<=10000&y<=10000;x++,y++){
		
		if(u*x+v*y==_gcd){
			
			cout<< x<<" "<<y<<endl;    // extended euclid algorithm
			count++;
		}
		
	}
	
	
	cout<<"There exists.."<<count<<endl;
}
/*
Here's a challenge. 
Can we find the numbers $x, y$ such that $ux+vy=\text{gcd} (u,v)$?

There exists infinitely many pairs - 
this is Bezout's Lemma. The algorithm to generate such pairs is called Extended Euclidean Algorithm.
*/
