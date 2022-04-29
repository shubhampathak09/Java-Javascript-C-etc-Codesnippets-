package HashMapsProblems;

import java.util.HashMap;

public class LongestSubstringWithAtleasKuniqueCharacters {


    public static void main(String[] args) {

        HashMap<Character, Integer> hm = new HashMap<>();


        String s = "aabbcdbca";

        int k = 2;

        int  i=-1;
        int j=-1;

        int len=0;

        String ans="";
        while (true)
        {
          boolean enter1=false;
          boolean enter2=false;
            while(i<s.length()-1){
                i++;
                enter1=true;
                char c=s.charAt(i);
                hm.put(c,hm.getOrDefault(c,0)+1);

                if(hm.size()<=k){

                    int ln=(i-j);
                    if(ln>len){
                        len=ln;
                        ans=s.substring(j+1,i+1);
                        //System.out.println(len);
                    }

                }
                else
                {
                    break;
                }
            }

            while(j<i){
                enter2=true;
                j++;
                char c=s.charAt(j);
                if(hm.get(c)==1){
                    hm.remove(c);
                }
                else
                {
                    hm.put(c,hm.get(c)-1);
                }

                if(hm.size()>k){
                    continue;
                }
                else{

                    int ln=i-j;

                    if(len<ln){
                        len=ln;
                        ans=s.substring(j+1,i+1);

                    }
                   break;
                }

            }


            if(enter1==false&&enter2==false)
                break;

        }

  System.out.println(ans);

      //  System.out.println(111);
       // System.out.println(ans.length());




 // stream 1.8 and above not supported in 1.8 and less
    }

}
