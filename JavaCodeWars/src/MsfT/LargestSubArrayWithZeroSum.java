package MsfT;

import java.util.HashMap;

public class LargestSubArrayWithZeroSum {

    // 60 to go

    public static void main(String[] args){


        int[] arr={15,-2,2,-8,1,7,10,23};

        int i=-1;

        int sum=0;

        HashMap<Integer,Integer>map=new HashMap<>();


        map.put(sum,-1);

       int maxlen=0;

        while(i<arr.length-1){

            i++;
            sum+=arr[i];

            if(map.containsKey(sum)==false){
                map.put(sum,i);
            }else
            {
                int length= (i-map.get(sum));
                if(length>maxlen){
                    maxlen=length;
                }
            }

        }

        System.out.println(maxlen);


    }

}
