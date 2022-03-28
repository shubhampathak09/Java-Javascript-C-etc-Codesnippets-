package MsfT;

import java.util.HashMap;

public class LongestSubArrayWithEqualZerosOnesAndTwos {


    public static void main(String[] args) {


    int[] arr = {1,1,2,0,1,0,1,2,1,2,2,0};

    int ans = 0;

    HashMap<String, Integer> hm = new HashMap<>();

    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;

    int del1=cnt1-cnt0;
    int del2=cnt2-cnt0;

   String key=del1+"#"+del2;

   hm.put(key,-1);

   for(int i=0;i<arr.length;i++){

       if(arr[i]==0){
           cnt0++;
       }else if(arr[i]==1){
           cnt1++;
       }else if(arr[i]==2){
           cnt2++;
       }

       del1=cnt1-cnt0;
       del2=cnt2-cnt1;

       key=del1+"#"+del2;
       if(hm.containsKey(key)){

           int len=i-hm.get(key);
           if(len>ans){
               ans=len;
           }
       }
       else{
           hm.put(key,i);
       }
   }

        System.out.println(ans);

}
}
