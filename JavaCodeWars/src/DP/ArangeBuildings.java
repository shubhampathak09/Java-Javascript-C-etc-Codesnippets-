package DP;

public class ArangeBuildings {


    public static void main(String[] args){


        int n=5;

     //   int[] dp=new int[n+1];

        int space=1;
        int building=1;


        for(int i=2;i<=n;i++)
        {

            int nbuilding=space;
            int nspace=space+building;

            space=nspace;
            building=nbuilding;
        }

        int total=space+building;


        System.out.println("Total Number of ways to set up Colony is.."+total*total);

    }

}
