// find

#include<bits/stdc++.h>
using namespace std;

int main()
{

string par="cd kcec fcfc kc kc rfr4 fcwx edeegv kc ddedce kcf fcced kdccecec vc4rw kcfcff ffeffceedeekcfi vwddcene  eeld kc cefcce";

string word;

getline(cin,word);

// find all occurences of string


int index=par.find(word);




/*
if(index !=-1){
	cout<<"first occurence is.."<<index<<endl;
}

index =par.find(word,index+1);


if(index!=-1){
	cout<<"second occurence is.."<<index<<endl;
}
*/


//int index=par.find(word);
// given code will return all occurences of word in string
while(index!=-1){

cout<<"occurence of word at.."<<index<<endl;	
index=par.find(word,index+1);
	
}

}

 
