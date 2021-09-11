package DP;

public class BinaryStringNoConsecutiveZeroes {


    public static void main(String[] args){

        int n=6;

     //   int []  dp=new int[n+1];

        int countzero=1;  // binary string of length 1 ending with zero having no consecutive zeroes
        int countone=1;   // binary string of length 1 ending with one having no consecuitve zeros

        for(int i=2;i<=n;i++){


            int newcountzero=countone;
            int newcountone=countzero+countone;

            countzero=newcountzero;
            countone=newcountone;

        }

        int ans=countzero+countone;


        System.out.println("Total  Count of Required Binary Strings are.."+ans);

    }

}
