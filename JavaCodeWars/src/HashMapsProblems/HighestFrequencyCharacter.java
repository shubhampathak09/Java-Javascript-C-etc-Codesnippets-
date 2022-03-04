package HashMapsProblems;

import java.util.HashMap;

public class HighestFrequencyCharacter {

    public static void main(String[] args){


        // b a b c c c d b a b c c c d


        HashMap<Character,Integer>hm=new HashMap<>();

        String s="babcccdbabcccd";

       // b ->4  a->>2   c->6  d->2


        for(int i=0;i<s.length();i++){

            char ch=s.charAt(i);
            if(hm.containsKey(ch)){
                hm.put(ch,hm.get(ch)+1);
            }else
            {
                hm.put(ch,1);
            }
        }
       int hf=0;
       char ne=s.charAt(0);

        for(Character c:hm.keySet()){
            if(hm.get(c)>hf){
                hf=hm.get(c);
                ne=c;
            }
        }

        System.out.println(ne);
        System.out.println(hf);



    }

}
