package Katas;

import java.util.HashMap;

public class TwoSum {


    public static void main(String[] args)
    {
        //int[]num={2,7,11,15};


        int [] num={3,2,4};

        int n=num.length;

        HashMap<Integer,Integer>hm=new HashMap<>();

        int target=6;

        for(int i=0;i<n;i++)
        {
            if(hm.containsKey(target-num[i]))
            {

                System.out.println(i+" "+hm.get(target-num[i]));
                return;
            }

                hm.put(num[i],i);  }


        System.out.println(-1+" "+-1);

        }
    }


