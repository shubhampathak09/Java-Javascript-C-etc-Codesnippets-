package DP;

public class RegularExpressionMatching {


    public static void main(String[] args)
    {


        String str="mississippi";
        String pattern="mis*i.*p*i";

        boolean[][] dp=new boolean[pattern.length()+1][str.length()+1];

      for(int i=0;i<dp.length;i++)
      {
          for(int j=0;j<dp[0].length;j++)
          {

              if(i==0&&j==0){
                  dp[i][j]=true;
              }else if(i==0){
                  dp[i][j]=false;
              }else if(j==0){

                  char pc=pattern.charAt(i-1);
                  if(pc=='*'){
                      dp[i][j]=dp[i-2][j];
                  }else
                  {
                      dp[i][j]=false;
                  }
              }else{

                  char sc= str.charAt(j-1);
                  char pc=pattern.charAt(i-1);


                  if(pc=='*'){


                      dp[i][j]=dp[i-2][j];
                      char slc=pattern.charAt(i-2);

                      if(slc==sc||slc=='.')
                      {
                          dp[i][j]=dp[i][j]||dp[i][j-1];
                      }
                  }else if(pc=='.'){
                      dp[i][j]=dp[i-1][j-1];
                  }else if(sc==pc){
                      dp[i][j]=dp[i-1][j-1];
                  }else{
                      dp[i][j]=false;
                  }



              }

          }
      }

     System.out.println(dp[pattern.length()][str.length()]);


    }

}
