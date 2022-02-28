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
         cur.add(1);
         triangle.add(cur);
        }

        return triangle;
    }

    public static void main(String[] args){

        List<List<Integer>>ans=new ArrayList<>();


        ans=generate(5);


        for(int i=0;i<ans.size();i++){
            for(Integer x:ans.get(i)){
                System.out.print(x+" ");
            }
            System.out.println();

        }
        /*
        1
        1 1
        1 2 1
        1 3 3 1
        1 4 6 4 1
        */


    }


}
