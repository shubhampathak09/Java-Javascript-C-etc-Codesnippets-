package SPOJ;

import java.util.HashMap;
import java.util.Scanner;

public class ABCDEF {


    //Hashing based solution
/*
    ABCDEF - ABCDEF
#binary-search
    You are given a set S of integers between -30000 and 30000 (inclusive).

    Find the total number of sextuples  that satisfy:

*/



    public static void solve(){


        Scanner s=new Scanner(System.in);

        int n=s.nextInt();

        int[] ar=new int[n];

        for(int i=0;i<n;i++){
            ar[i]=s.nextInt();
        }

        // a*b+c  =(f+e)*d
        // ab+c= fd+fe


        // rhs

        HashMap<Integer,Integer>hm=new HashMap<>();


        for(int f:ar){
            for(int d:ar){
                for(int e:ar){

                    int exp=f*d+f*e;
                    hm.put(exp,hm.getOrDefault(exp,0)+1);
                }
            }
        }

        int res=0;

        for(int a:ar){
            for(int b:ar){
                for(int c:ar){
                  int exp=a*b+c;
                  res+=hm.getOrDefault(exp,0);
                }
            }
        }

        System.out.println(res);

    }


    public static void main(String[] args){

    }

}
