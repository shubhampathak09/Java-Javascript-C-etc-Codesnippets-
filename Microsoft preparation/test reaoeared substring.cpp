
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        
        map<string,int>mp;
        
        vector<string>res;
        
        if(s.length()<10)
            return res;
        
        
        
        for(int i=0;i<=s.length()-10;i++){
            
            string cr=s.substr(i,10);
            
             
            
            if(mp.find(cr)!=mp.end()&&mp[cr]==1)
            {
                res.push_back(cr);
            }
            
           mp[cr]++;
        }
        
        return res;
    }
};
