package MsfT;

import java.util.HashMap;

public class LargesSubArraySumExactlyK {

    public static void main(String[] args){


        int[] arr={10,2,-2,-20,10};

        int n=arr.length;

        int len=0;

        int  target=-10;
        HashMap<Integer,Integer>hm=new HashMap<>();

        hm.put(0,-1);

        int sum=0;

        for(int i=0;i<n;i++){

            sum+=arr[i];

            int rem=sum-target;

            if(hm.containsKey(rem)){

                int mxlen=i - hm.getOrDefault(rem,0);
                if(mxlen>len){
                    len=mxlen;
                }

            }
            hm.put(sum,i);
        }
        System.out.println(len);
    }


}
