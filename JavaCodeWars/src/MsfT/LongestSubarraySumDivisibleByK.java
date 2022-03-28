package MsfT;

import java.util.HashMap;

public class LongestSubarraySumDivisibleByK {

    public static void main(String[] args){


       int[] arr={5,8,-3,-9,-7,4,11,2,9,-16,8,-4};


       int sum=0;

        HashMap<Integer,Integer>hm=new HashMap<>();

        int len=0;

        int div=7;

       hm.put(sum,-1);

        int csum=0;

       for(int i=0;i<arr.length;i++){

           csum+=arr[i];
          int rem=csum %div;

          if(hm.containsKey(rem)){

              int mxlen=i-hm.getOrDefault(rem,0);
              if(mxlen>len){
                  len=mxlen;
              }
          }

          if(rem>0)
          hm.put(rem,i);
          else
          hm.put(rem+div,i);
       }

    }

}
