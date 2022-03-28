
// 

#include<bits/stdc++.h>
// max rectaangles

using namespace std;

int findMaxRectangles(int b){
	
	if(b<=2)
	return 0;
	
	if(b==3)
	return 1;
	
	return findMaxRectangles(b-2) +1;


}

int maxSquares(int n){
	
	int ans=0;
	
	for(int i=1;i<=n;i++){
		ans+=i;
	}
	
	return ans;
}

int actualSol(int n){
	
	int b=n-2;
	
	b=b/2;
	
	int sum=0;
	
	
	for(int i=1;i<=b;i++){
		
		sum+=i;
		
	}
	
	return sum;
}

int main(){


int b=4;

int n=findMaxRectangles(b);

cout<<actualSol(7);  //--> sone expecyed shit

}


	
	

