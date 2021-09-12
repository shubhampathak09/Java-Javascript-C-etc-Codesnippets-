package DP;

public class MaxSumNonAdjacentElements {

    public static void main(String[] args){

        int[] arr={5,10,10,100,5,6};

        int n=arr.length;

       // int[] dp=new int[n];


        int incl=arr[0];
        int excl=0;

        for(int i=1;i<n;i++){
            int newincl=excl+arr[i];
            int newexcl=Math.max(incl,excl);

            incl=newincl;
            excl=newexcl;
        }

        System.out.println(Math.max(incl,excl));
    }

}
