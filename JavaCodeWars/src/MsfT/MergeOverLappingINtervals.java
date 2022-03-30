package MsfT;

import java.util.Arrays;
import java.util.Stack;

public class MergeOverLappingINtervals {



    public static class Pair implements Comparable<Pair>
    {


        int st;
        int et;

        Pair(int st,int et){
            this.st=st;
            this.et=et;

        }

        public int compareTo(Pair other){

           if(this.st!=other.st){
               return this.st - other.st;
           }else{
               return this.et- other.et;
           }
        }
    }

    public static void main(String[] args){



        Pair[] pairs=new Pair[4];

        // input

        Arrays.sort(pairs);


        Stack<Pair>stk=new Stack<>();

        for(int i=0;i< pairs.length;i++){
            if(i==0){
                stk.push(pairs[i]);
            }else
            {
                Pair top=stk.peek();
                if(pairs[i].st>=top.et){
                    stk.push(pairs[i]);
                }else
                {
                    top.et=Math.max(top.et,pairs[i].et);
                }


                // complee the rest main impl is coplete -
                // >use two staks two print result

            }
        }



    }

}
