package DP;

public class MinChangesToMakeArrayIncreasing {

    // VARIATION OF lis PROBLEM

    

    public static void main(String[] args){


        int [] arr ={1,2,6,5,4};



        // find lis

        int[] dp=new int[arr.length];

        int ovmax=0;

        for(int i=0;i<arr.length;i++){

            int mx=0;
            for(int j=0;j<i;j++){

                if(arr[j]<arr[i]){

                    if(dp[j]>mx){
                        mx=dp[j];
                    }

                }



            }
            dp[i]=1+mx;

            if(ovmax<dp[i]){
                ovmax=dp[i];
            }

        }

        System.out.println("Lis length is.."+ovmax);

        System.out.println("Min element to change to make the array striclty increasing.."+(arr.length-ovmax));
    }

}
