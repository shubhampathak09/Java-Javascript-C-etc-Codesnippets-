class Solution {
    public boolean isValid(String s) {
        
        
        Stack<Character>stk=new Stack<>();
        
        Character xtop;
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)=='('||s.charAt(i)=='['||s.charAt(i)=='{')
                stk.push(s.charAt(i));
            
            
              
            
             else
              {
                 
                 if(stk.size()==0)
                     return false;
                
                 Character curr=s.charAt(i);
              xtop=stk.pop();
                 
                  if(curr==')')
                  {
                      if(xtop=='{'||xtop=='[')
                          return false;
                  }                     
                  
                else if(curr=='}')
                {
                    if(xtop=='('||xtop=='[')
                        return false;
                }
                
                else
                {
                    if(xtop=='('||xtop=='{')
                        return false;
                }
              } 
            }
        
        if(stk.size()!=0)
            return false;
            
         return true;
}
        
}  
