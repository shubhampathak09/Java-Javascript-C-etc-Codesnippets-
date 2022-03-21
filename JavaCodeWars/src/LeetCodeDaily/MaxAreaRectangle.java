package LeetCodeDaily;

public class MaxAreaRectangle {
/*
    Given a rows x cols binary matrix filled with 0's and 1's, find the largest rectangle containing only 1's and return its area.
*/


    public static int findMaxRectangle(int []a){


        return 0;

    }

    public static int maximalRectangle(char[][] matrix) {




        int n=matrix.length;
        int m=matrix[0].length;


         int[][] mat=new int[n][m];



        for(int i=0;i< n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='1')
                    mat[i][j]=1;
                else
                    mat[i][j]=0;
            }
        }

      for(int i=1;i<n;i++){
          for(int j=0;j<m;j++){

              if(mat[i][j]==0)
              mat[i][j]=0;
              else
              mat[i][j]+=mat[i-1][j];
          }



      }

     int mx=0;
      for(int i=0;i<n;i++){
          
          mx=Math.max(mx,findMaxRectangle(mat[i]));

      }

      // fuck  --atemot 1 with arraylist

        //fuck   attempt 2 with arraylist

        //seitched to simple 2 d arrays
  /*
      for(ArrayList<Integer>a:mat2){
          System.out.println(a);
      }
*/
/*
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                System.out.print(mat[i][j]+" ");
            }
            System.out.println();
        }
  */
       // System.out.println(mat[1]);

      return mx;
    }

    public static void  main(String[] args){

      char[][] c={{'1','0','1','0','0'},{'1','0','1','1','1'},{'1','1','1','1','1'},{'1','0','0','1','0'}};

        int ans=maximalRectangle(c);

    }

}
