package CSES;

import java.util.Scanner;

public class wierdAlgoritm {

    public static void main(String[] args){


        int n;

        Scanner s=new Scanner(System.in);

        n=s.nextInt();

        while(n!=1){

            System.out.print(n+" ");

            if(n%2==0){
                n=n/2;

            }else
            {
                n=3*n+1;
            }

        }
        System.out.print(1);

    }


}
