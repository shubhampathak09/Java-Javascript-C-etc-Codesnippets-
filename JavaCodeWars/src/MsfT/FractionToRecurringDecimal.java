package MsfT;

import java.util.HashMap;

public class FractionToRecurringDecimal {

    public static void main(String[] args){


        int num=93;
        int den=7;

        StringBuilder ans=new StringBuilder();


        int q=num/den;

        int rem=num%den;

        ans.append(q);

        HashMap<Integer,Integer>hm=new HashMap<>();

        if(rem==0){
            System.out.println(ans);
            return;
        }
        else
        {
            ans.append(".");
            while(rem!=0){
                if(hm.containsKey(rem)){
                    int len=hm.get(rem);
                  ans.insert(len,"(") ;
                  ans.append(")");
                  break;
                }
                else {
                    hm.put(rem,ans.length());
                    rem *= 10;
                    q = rem / den;
                    rem = rem % den;
                    ans.append(q);
                }

            }
        }

        System.out.println(ans);
    }

}
