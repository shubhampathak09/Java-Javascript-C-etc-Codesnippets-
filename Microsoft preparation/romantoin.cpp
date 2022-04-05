 int romanToInt(string s) {
        
        
          int sum=0;
        
        map<char, int> mp;
        mp['I']=1;
        mp['X']=10;
        mp['V']=5;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        
        
        
        for(int i=0;i<s.length();i++){
            
            if(mp[s[i]]<mp[s[i+1]]){
                sum+=mp[s[i+1]]-mp[s[i]];
                i++;
                continue;
            }
            sum+=mp[s[i]];
        }
        
        return sum;
        
    }
    
    // test urself
