#include<bits/stdc++.h>
using namespace std;


string decimalToBinary(int n)
{
    //finding the binary form of the number and
    //converting it to string.
    string s = bitset<64> (n).to_string();
     
    //Finding the first occurrence of "1"
    //to strip off the leading zeroes.
    const auto loc1 = s.find('1');
     
    if(loc1 != string::npos)
        return s.substr(loc1);
     
    return "0";
}

int main()
{

    while(true)
	{
		
	int n;
	cin>>n;
//	cout<< __builtin_popcount(n);


cout<<decimalToBinary(n);	
}
	
//	cout<<bitset<64>(n);
}
