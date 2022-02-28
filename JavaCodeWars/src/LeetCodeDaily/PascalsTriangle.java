package LeetCodeDaily;

import java.util.ArrayList;
import java.util.List;

public class PascalsTriangle {


    public static List<List<Integer>> generate(int numrows){

        List<List<Integer>> triangle=new ArrayList<>();

        if(numrows==0)
            return  triangle;


        List<Integer> firs_row=new ArrayList<>();
        firs_row.add(1);
        triangle.add(firs_row);

        for(int i=1;i<numrows;i++){

         List<Integer>prev=triangle.get(i-1);
         List<Integer>cur=new ArrayList<>();

         cur.add(1);
         for(int j=1;j<i;j++){
             cur.add(prev.get(j-1)+prev.get(j));
         }

        }

        return null;
    }

    public static void main(String[] args){


    }


}
