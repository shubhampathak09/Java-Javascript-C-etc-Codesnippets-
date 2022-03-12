package StacksAndQueues;

import java.util.Stack;

public class LargestAreaHistogram {


     public static void main(String[] args){


         int [] ar={};

         int [] rb=new int[ar.length];

         int [] lb=new int[ar.length];



         // bexr smaller element on right



         Stack<Integer>st=new Stack();


         st.push(ar.length-1);

         rb[ar.length-1]=ar.length;

         for(int i=ar.length-2;i>=0;i--){

             while(st.size()>0&&ar[i]<ar[st.peek()] ){
                 st.pop();

             }
             if(st.size()==0){
                 rb[i]=ar.length;
             }else {
                 rb[i] = st.peek();
             }

             st.push(i);
         }



         Stack<Integer>st2=new Stack();


         st2.push(0);

         lb[0]=-1;

         for(int i=1;i<ar.length;i++){

             while(st.size()>0&&ar[i]<ar[st.peek()] ){
                 st.pop();

             }
             if(st.size()==0){
                 lb[i]=-1;
             }else {
                 rb[i] = st.peek();
             }

             st.push(i);
         }





         int maxArea=Integer.MIN_VALUE;

         for(int i=0;i<ar.length;i++){



             int width=rb[i]-lb[i] -1;


             int height=ar[i];

             int area=width*height;

             if(area>maxArea){
                 maxArea=area;
             }

         }

         System.out.println(maxArea);
     }


}
