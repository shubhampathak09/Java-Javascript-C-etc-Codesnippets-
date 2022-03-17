package LeetCodeDaily;

public class JumpGame2 {

    public static void main(String[] args){


        int[] nums={2,3,1,1,4};

         int[] dp=new int[nums.length];

         dp[nums.length-1]=0;


         for(int i= nums.length-2;i>=0;i--){

             if(nums[i]>0){

                 int min=Integer.MAX_VALUE;

             for(int j=1;j<=nums[i]&&i+j< nums.length;j++) {

               if(dp[i+j]!=0) {
                   min = Math.min(dp[i + j], min);
                   System.out.println(min);
               }
             }

             if(min!=Integer.MAX_VALUE)
             dp[i]=1+min;
             //else

             }



         }


         for(int i=0;i<dp.length;i++){
          //   System.out.println(dp[i]);
         }

     System.out.println(dp[0]);




    }

}
