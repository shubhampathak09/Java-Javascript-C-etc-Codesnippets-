package MsfT;

import java.util.ArrayList;
import java.util.HashMap;

public class CountDistinctiElementsInArraySizek {


    //Acquire release approach

    public static void main(String[] args){


        int [] a={2,5,5,6,3,2,3,2,4,5,2,2,2,2,5,6};

        ArrayList<Integer>ar=new ArrayList<>();

        HashMap<Integer,Integer>hm=new HashMap<>();

        int k=4;

        for(int i=0;i<k-1;i++){

            hm.put(a[i],hm.getOrDefault(a[i],0)+1);

        }

        for(int j=0,i=k-1;i<a.length;){

            hm.put(a[i],hm.getOrDefault(a[i],0)+1);

            ar.add(hm.size());

            int fq=hm.get(a[j]);

            if(fq==1){

                hm.remove(a[j]);
            }else
            {
                hm.put(a[j],fq-1);
            }
            i++;
            j++;

        }

        System.out.println(ar);

    }

}
