package DpLevel1;

public class Fibonaaci {


   public static int[] a=new int[10001];

   public static int gen(int n){

            if(n==1||n==0){
                return n;
            }
            if(a[n]!=-1){
                return a[n];
            }
            else
            return a[n]=gen(n-1)+gen(n-2);

            }

    public static void main(String[] args){

       for(int i=0;i<a.length;i++){
           a[i]=-1;
       }

        int ans=gen(6);  // 0  1  2 3 5 8

        System.out.println(ans);


    }

    // basic way to memoise and store the result


}
