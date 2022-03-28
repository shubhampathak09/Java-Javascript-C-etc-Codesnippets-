package MsfT;

import java.util.HashMap;

public class PairDivisibleByK {

    public static void main(String[] args){

     int[] arr={9,56,25,52,72,44,80,36};

     HashMap<Integer,Integer>hm=new HashMap<>();

     int k=8;

     for(int val:arr){

         int rem=val%k;
         int of=hm.getOrDefault(rem,0);
         hm.put(rem,of+1);
     }

     for(int val:arr){
         int rem=val %k;
         if(rem==0){


             if(hm.get(rem)%2!=0){

                 System.out.println("cant have pairs");
                 return;
             }

         }else if(2*rem==k){

             int fq=hm.get(rem);
             if(fq%2!=0)
             {
                 System.out.println("cant have pairs");
                 return;
             }

         }else{

             int p1f=hm.get(rem);
             int p2f=hm.getOrDefault(k-rem,0);

            if(p1f!=p2f){
                System.out.println("not possible");
                return;
            }
         }
     }

        System.out.println("found some pairs sum divisble by k in the whole array");
     return;
    }


}
