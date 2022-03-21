package Katas;

public class Lcm {


    public static int gcd(int a,int b){

        if(a<b)
            return gcd(b,a);

        if(a%b==0)
            return b;
        else
            return gcd(b,a%b);

    }


    public static  int solution(int[] arr,int idx){

     if(idx== arr.length)
         return arr[idx-1];

     int a=arr[idx];
     int b=solution(arr,idx+1);

     return (a*b)/gcd(a,b);

    }

public static void main(String[ ] args){


    int[] a={2,3,4,6};

    int lcm=(12*4)/gcd(12,4);

    System.out.println(gcd(3,12));

    System.out.println(lcm);

    // lcm(a,b) = (a*b)/gcd(a,b)

    System.out.println(solution(a,0));
}

}

