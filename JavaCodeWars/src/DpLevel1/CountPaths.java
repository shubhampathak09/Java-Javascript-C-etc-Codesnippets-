package DpLevel1;

import java.util.Scanner;

public class CountPaths {


    public static void main(String[] args) {


        Scanner scn = new Scanner(System.in);

        int n = scn.nextInt();

        int cp = countPaths(n);

        System.out.println(n);
    }

    public static int countPaths(int n){


        if(n==0){
            return 1;
        }

        if(n<0){
            return 0;
        }

        int nm1=countPaths(n-1);

        int nm2=countPaths(n-2);

        int nm3=countPaths(n-3);


        int ans=nm1+nm2+nm3;

        return nm3;

    }



}
