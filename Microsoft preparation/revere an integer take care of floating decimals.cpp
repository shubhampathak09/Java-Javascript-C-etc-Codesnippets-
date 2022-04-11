class Solution {
public:
    int reverse(int x) {
       
        bool check=false;
        
        long val=x;
        
        if(val<0)
        {
            check=true;
            val=-1*val;
        }
        long num=0;
        while(val>0){
            
            num=num*10 + (val%10);
            val=val/10;
            
        }
        
        if(num>=2147483648||num<=-2147483648)
            return 0;
        
        return check==false ? num :-1*num;
        
        
    }
};
