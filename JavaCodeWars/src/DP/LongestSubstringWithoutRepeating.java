package DP;

import java.util.HashMap;

public class LongestSubstringWithoutRepeating {


    public static void main(String[] args) {

        String s = "pwwkew";

        HashMap<Character, Integer> hm = new HashMap<>();

        int i = -1, j = -1;
        String res = "";
        int ans = 0;


        while (true) {
                 boolean f1=false;
                 boolean f2=false;

            while (i < s.length() - 1) {
                i++;
                char x = s.charAt(i);
                hm.put(x, hm.getOrDefault(x, 0) + 1);

                if(hm.get(x)==2)
                {
                    break;
                }else
                {
                    int len=(i-j);
                    if(len>ans)
                    {
                        ans=len;
                        res=s.substring(j+1,i+1);
                    }
                }

                f1=true;
            }
            while (j < i) {
                j++;
                char x = s.charAt(j);
                hm.put(x,hm.get(x)-1);

               if(hm.get(x)==1)
               {
                   break;
               }

             f2=true;
            }
          if(f1==false&&f2==false)
          {
              break;
          }
        }

        System.out.println(res+" "+ans);
    }

}
