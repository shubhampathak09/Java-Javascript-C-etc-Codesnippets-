package HashMapsProblems;

import java.util.HashMap;

public class HighestFrequencCharacter {

public static void main(String[] args){

    String str="abcdbcb";


    HashMap<Character,Integer>hm=new HashMap<>();

    for(int i=0;i<str.length();i++){

        char ch=str.charAt(i);
        if(hm.containsKey(ch)){
            int of=hm.get(ch);
            int nf=of+1;
            hm.put(ch,nf);
        }else{
            hm.put(ch,1);
        }
    }
int mf=hm.get(str.charAt(0));

    char mfc=str.charAt(0);

    for(Character ke:hm.keySet()){

        if(hm.get(ke)>mf){
            mf=hm.get(ke);
            mfc=ke;
        }
    }


    System.out.println("Max frequency character is.."+mfc);
}


}
