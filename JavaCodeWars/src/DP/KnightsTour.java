package DP;

public class KnightsTour {

    public static  int[][]grid=new int[8][8];

    public static int []dx={2,1,-1,-2,-2,-1,1,2};
    public static int []dy={1,2,2,1,-1,-2,-2,-1};

    public static int solve(int x,int y,int[][]grid,int move)
    {
        if(move==64)
        {
            return 1;
        }

        for(int k=0;k<8;k++)
        {
            int newx=x+dx[k];
            int newy=y+dy[k];

            if(newx>=0&&newy>=0&&newx<8&&newy<8&&grid[newx][newy]==-1)
            {

                grid[newx][newy]=move;
                if(solve(newx,newy,grid,move+1)==1){
                    return 1;
                }else{
                    grid[newx][newy]=-1;
                }
            }

        }

        return 0;

    }




    public static void init()
    {

        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                grid[i][j]=-1;
            }
        }
        grid[0][0]=0;
    }


    public static void main(String[] args)
    {

        init();

       solve(0,0,grid,1);

       for(int i=0;i<8;i++)
       {
           for(int j=0;j<8;j++)
           {
               System.out.print(grid[i][j]+" ");

           }
           System.out.println();
       }
    }

}
