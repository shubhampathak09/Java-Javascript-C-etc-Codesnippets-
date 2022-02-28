package LeetCodeDaily;

import java.util.ArrayList;
import java.util.HashSet;

public class ContainsDuplicate {


    public static void main(String[] args){

        ArrayList<Integer> ar=new ArrayList<>();
        ar.add(1);
        ar.add(1);
        ar.add(2);
        ar.add(3);
        ar.add(5);


        HashSet<Integer>hs=new HashSet<>();


        for(Integer i:ar){

            if(hs.contains(i)==true){
                System.out.println("true");
                return;
            }
            hs.add(i);
        }


    }

}
