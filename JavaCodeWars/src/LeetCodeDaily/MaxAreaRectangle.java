package LeetCodeDaily;

import java.util.ArrayList;

public class MaxAreaRectangle {
/*
    Given a rows x cols binary matrix filled with 0's and 1's, find the largest rectangle containing only 1's and return its area.
*/

    public static int maximalRectangle(char[][] matrix) {




        int n=matrix.length;
        int m=matrix[0].length;

        ArrayList<ArrayList<Integer>>mat=new ArrayList<>(n);

        for(int i=0;i<m;i++){
            ArrayList<Integer>ar=new ArrayList<>();
            mat.add(ar);
        }

        for(int i=0;i< n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='1')
                    mat.get(i).add(1);
                else
                    mat.get(i).add(0);
            }
        }

      for(int i=0;i<mat.size();i++){
          for(int j=0;j<mat.get(i).size();j++){

              if(i==0)
              continue;

              if(mat.get(i).get(j)==0)
              mat.get(i).add(0);
              else
              mat.get(i).add(1+mat.get(i-1).get(j));
          }

      }


      // fuck
      for(ArrayList<Integer>a:mat){
          System.out.println(a);
      }

      return 0;
    }

    public static void  main(String[] args){

      char[][] c={{'1','0','1','0','0'},{'1','0','1','1','1'},{'1','1','1','1','1'},{'1','0','0','1','0'}};

        int ans=maximalRectangle(c);

    }

}
