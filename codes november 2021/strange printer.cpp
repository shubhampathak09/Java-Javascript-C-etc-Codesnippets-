// STRANGE printer

#include<bits/stdc++.h>
using namespace std;


int turn(string s,int i,int j){
	
	if(i>j)
	return 0;
	
	int turns=turn(s,i,j-1)+1;    // return min step to print i to j
	
	for(int k=i;k<j;k++){
		if(s[j-1]==s[k-1])
		turns=min(turn(s,i,k)+turn(s,k+1,j-1),turns);  // looks need to turns-1 for correct ans???
		
	}
	
	return turns;
}

int main()
{
	
	
	cout<<turn("abcccaa",0,7)-1;
	
}









/*
Remove Boxes

Burst Balloons

Zuma Game
*/


















/*
2020
associate qa enginner

api testing
-intellij, ui codechef, ghost 
-mani8al teting post mant api , ide coedbcfjf
-fcbcjcbc c jc
-e commerce marqude queue
- 35 frbdvf

-----------------------------------5 chcdncnccbcjcbgddc
dcgdghcsdgxxasxvx
cdhcc



// manual testing
 // wat to move into automated testing framework
 .//
 //ch
 */
