package LeetCodeDaily;

public class JumpGame2 {

    public static void main(String[] args){


        int[] nums= {5,9,3,2,1,0,2,3,3,1,0,0};

         int[] dp=new int[nums.length];

         dp[nums.length-1]=0;


         for(int i= nums.length-2;i>=0;i--){


             if(nums[i]==0){

                 dp[i]=Integer.MAX_VALUE;
                 continue;

             }

             if(nums[i]>0){
               //  System.out.println(i);
                 int min=Integer.MAX_VALUE;

             for(int j=1;j<=nums[i]&&i+j< nums.length;j++) {
               //  System.out.println(i);
               //  System.out.println(i+j);
            //     System.out.println(dp[i+j]);

                   min = Math.min(dp[i + j], min);
             //      System.out.println(min);

             }

             if(min!=Integer.MAX_VALUE)
             dp[i]=1+min;
             //else
            else
                dp[i]=Integer.MAX_VALUE;
             }



         }


         for(int i=0;i<dp.length;i++){
             System.out.print(dp[i]+" ");
         }
System.out.println(" ");
     System.out.println(dp[0]);




    }

}
