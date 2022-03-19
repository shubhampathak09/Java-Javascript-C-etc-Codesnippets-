package CSES;

import java.util.Scanner;

public class MissingNumber {

    public static void main(String[] args){


        int n=5;

        Scanner s=new Scanner(System.in);
        int ss=0;
        for(int i=1;i<=n-1;i++){


            int x;
            x=s.nextInt();
            ss+=x;


        }
        int t=0;

        for(int i=1;i<=n;i++){

            t+=i;
        }
        int missing=t-ss;

        System.out.println(missing);


    }

}
