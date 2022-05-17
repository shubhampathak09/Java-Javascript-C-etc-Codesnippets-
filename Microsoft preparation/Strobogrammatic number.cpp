https://leetcode.com/problems/strobogrammatic-number/submissions/

class Solution {
public:
    bool isStrobogrammatic(string num) {
        
        
        string ans="";
        
        
        for(int i=num.length()-1;i>=0;i--){
            
            
            if(num[i]=='1' ||num[i]=='0'|| num[i]=='8'){
                ans+=num[i];
            }
            
            else if(num[i]=='6')
                ans+='9';
            
            else if(num[i]=='9')
                ans+='6';
            else
                return false;
            
        }
        
        return ans==num;
    }
};
