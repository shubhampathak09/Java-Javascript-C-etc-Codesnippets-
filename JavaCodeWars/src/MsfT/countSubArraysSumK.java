package MsfT;


import java.util.HashMap;

public class countSubArraysSumK {

    public static void main(String[] args){


        int[] arr={10,2,-2,-20,10};

        int ans=0;

        HashMap<Integer,Integer>hm=new HashMap<>();


        int target=-10;

        hm.put(0,1);

        int sum=0;

        for(int i=0;i<arr.length;i++){


        sum+=arr[i];
        int rsum=sum-target;

        if(hm.containsKey(rsum));
            {

              ans+=hm.getOrDefault(rsum,0);
              hm.put(sum,hm.getOrDefault(sum,0)+1);
            }

        }

        System.out.println(ans);
    }

}
