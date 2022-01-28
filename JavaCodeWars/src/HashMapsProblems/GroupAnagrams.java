package HashMapsProblems;

import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;

public class GroupAnagrams {


    public  static void solve(){

       // [CARS, REPAID, DUES, NOSE, SIGNED, LANE, PAIRED, ARCS, GRAB, USED, ONES, BRAG, SUED, LEAN, SCAR, DESIGN]

        //GRAB BRAG
        //CARS ARCS SCAR
        //REPAID PAIRED
        //LANE LEAN
        //SIGNED DESIGN
        //DUES USED SUED
        //NOSE ONES

        ArrayList<String> dc=new ArrayList<>();

        dc.add("CARS");
        dc.add("REPAID");
        dc.add("DUES");
        dc.add("NOSE");
        dc.add("SIGNED");
        dc.add("LANE");
        dc.add("PAIRED");
        dc.add("ARCS");
        dc.add("GRAB");
        dc.add("USED");
        dc.add("ONES");
        dc.add("BRAG");
        dc.add("SUED");
        dc.add("LEAN");
        dc.add("SCAR");
        dc.add("DESGIN");






        HashMap<String,ArrayList<String>>hm=new HashMap<>();


        // conver input to characer arr
        for(String s:dc){

            char[] tempAr=s.toCharArray();
            Arrays.sort(tempAr);
            String temp=new String(tempAr);
            if(hm.get(temp)==null){

                ArrayList<String>res=new ArrayList<>();
                res.add(s);
                hm.put(temp,res);
               // res.add(temp);
            }else{
            ArrayList<String>res=hm.get(temp);
            res.add(s);
            hm.put(temp,res);}
            // use this
           // System.out.println(temp);
        }


        for(String s:hm.keySet()){

            System.out.println(hm.get(s));

        }

    }


    public static void main(String[] args){


solve();
// call the function
        
    }

}
