// min parathesses to insert

#include <iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;


int insetParantheses(string s){
    stack<char> st;

    for(int i = 0 ;i< s.length(); i++){

     if(s[i] == '('){
        if(!st.empty()){
            st.push(s[i]);
        }else if(s[i] == ')'){
            
        }
     }

    }
}

int main()
{
    


}