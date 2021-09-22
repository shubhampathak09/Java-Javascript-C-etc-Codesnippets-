class Solution {
public:
    int repeatedStringMatch(string a, string b) {
       
        int n=a.length();
        int m=b.length();
        
        int rep=m/n;  // atleast this many time we need to repeat, we add additional 2 string to  cover first and last characers in case they are missing some substring , if no substring is found return -1, else return count of required repeats
        string res="";
        int ct=0;
        
     //   cout<<rep;
        
        for(int i=0;i<rep+2;i++){
            
            res+=a;
            ct++;
            
   //         cout<<res<<" "<<b<<endl;
            
            if(res.find(b)!=string::npos){
                return ct;
            } 
            
        }
        
        return -1;
    }
};
