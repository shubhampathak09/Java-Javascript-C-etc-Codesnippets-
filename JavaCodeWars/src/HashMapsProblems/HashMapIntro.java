package HashMapsProblems;

import java.util.*;

public class HashMapIntro {

    public static void main(String[] args) {


    HashMap<String, Integer> hm = new HashMap<>();

    hm.put("India",120);
    hm.put("China",200);
    hm.put("US",110);
    hm.put("UK",80);

    //this below will throw null pointer
 //  System.out.println(hm.get("Ukraine").toString());

        System.out.println(hm);

        for(String s:hm.keySet()){
            System.out.println(s);
            System.out.println(hm.get(s));
        }



}


}
