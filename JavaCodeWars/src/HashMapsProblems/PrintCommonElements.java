package HashMapsProblems;

import java.util.HashSet;

public class PrintCommonElements {


    public static void main(String[] args){


        int[] a={1,1,2,2,2};
        int[] b={1,1,1,4,2,2};

        HashSet<Integer>hm=new HashSet<>();

        for(int i=0;i<a.length;i++)
        {
            hm.add(a[i]);
        }

        for(int i=0;i<b.length;i++){

            if(hm.contains(b[i])){
                System.out.print(b[i]+" ");
                hm.remove(b[i]);
            }
        }

    }

}
