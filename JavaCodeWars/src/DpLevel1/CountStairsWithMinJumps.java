package DpLevel1;

public class CountStairsWithMinJumps {


    public static void main(String[] args){


        int n=10;

        int[] a={3,2,4,2,0,2,3,1,2,2};

        Integer[] dp=new Integer[n+1];

       dp[n]=0;

       for(int i=n-1;i>=0;i--){


           if(a[i]>0){
               int min=Integer.MAX_VALUE;
               for(int j=1;j<=a[i]&&i+j<n;j++)
               {
                   if(dp[i+j]!=null)
                   min=Math.min(min,dp[i+j]);



               }
               if(min!=Integer.MAX_VALUE){
                   dp[i]=1+min;
               }

           }

       }


        System.out.println(dp[0]);


//       for(int i=0;i<=n;i++)
//           System.out.print(dp[i]);





    }

}
