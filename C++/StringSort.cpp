//sort strings
// reverse parameter if true generate a reversed output
//comparision type
//Numeric type

/*
3
92 022
82 12
77 13
2 false numeric
*/

// 1. extract keys from every string

//2. use tokenization to  do these as key is stores in col

//store keys with strings

//extraact and store

// sorting ->numeric or Lexicographic  so we have 2 functions

// reverse is true  call  reverse function to reverse the output


#include<bits/stdc++.h>


using namespace std;
// 20 30 40  k=2

string  extractStringAtKey(string str,int key)
{
	
	// string tokeenizer
	// hello how are you
	
	char *s=strtok((char*)str.c_str()," "); // string to character array
	
	while(key>1)
	{
		s=strtok(NULL," ");
		key--;
	}
	
	return (string)s;  // type cast
	
}


int convertToInt(string s)
{
	
	int ans=0;
	
	for(int i=0;i<s.length();i++)
	{
		ans+=ans*10+(s[i]-'0');
	}
	
	return ans;
}

bool numericCompare(pair<string,string>s1,pair<string,string>s2)
{

string key1,key2;

key1=s1.second;
key2=s2.second;


return convertToInt(key1)<convertToInt(key2);
	
}

bool lexicoCompare(pair<string,string>s1,pair<string,string>s2)
{
	
	string key1,key2;
	key1=s1.second;
	key2=s2.second;
	
	return key1<key2;  // operates on string method so thiss is lecixo comapre
	
}


int main()
{
	

int n;
cin>>n;

cin.get(); // consume extra space \n; input contains space

string temp;
vector<string>v;

for(int i=0;i<n;i++){

getline(cin,temp); // includes white space

v.push_back(temp);
	
}
	
int key;

string reversal;
string ordering;

cin>>key>>reversal>>ordering;		


	
// 1. extract keys for comparison and store them	
	
	
//	string s="20 30 40 50";
	
//	cout<<extractStringAtKey(s,3);
	
//2. storeage

vector<pair<string,string>>vp;

for(int i=0;i<n;i++)
{
	vp.push_back({v[i],extractStringAtKey(v[i],key)});
}
	
// 3. sort

// sorting depends in ordering

if(ordering=="numeric"){
	sort(vp.begin(),vp.end(),numericCompare);
}
else
{
	sort(vp.begin(),vp.end(),lexicoCompare);
	}	


//4 .

if(reversal=="true")
{
	reverse(vp.begin(),vp.end());
}


//.5.// output

for(int i=0;i<n;i++)
{
	cout<<vp[i].first<<endl;
}

return 0;
	
}
