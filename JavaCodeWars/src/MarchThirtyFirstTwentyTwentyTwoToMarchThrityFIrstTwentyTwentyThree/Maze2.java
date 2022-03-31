package MarchThirtyFirstTwentyTwentyTwoToMarchThrityFIrstTwentyTwentyThree;

// just learning from my mistakes and moving ahead

/*
        Description
        There is a ball in a maze with empty spaces and walls. The ball can go through empty spaces by rolling up, down, left or right,
        but it won't stop rolling until hitting a wall. When the ball stops, it could choose the next direction.

        Given the ball's start position, the destination and the maze, find the shortest distance for the ball to stop at the destination.
        The distance is defined by the number of empty spaces traveled by the ball from the start position (excluded) to the destination (included). If the ball cannot stop at the destination, return -1.

        The maze is represented by a binary 2D array.
        1 means the wall and 0 means the empty space.
        You may assume that the borders of the maze are all walls.
        The start and destination coordinates are represented by row and column indexes.
*/


import java.util.LinkedList;
import java.util.Queue;

public class Maze2 {

    public static int[] disx={1,0,-1,0};
    public static int[] disy={0,1,0,-1};


    public static class Pair{
        int x;
        int y;
        int dis;

        Pair(int x,int y,int dis){
            this.x=x;
            this.y=y;
            this.dis=0;
        }
    }


    public static int shortestDistance(int[][] maze, int[] start, int[] destination) {
        // write your code here



      //  int[][] visited=new int[maze.length][maze[0].length];




        int sx=start[0],sy=start[1];
        int dx=destination[0],dy=destination[1];

        Queue<Pair>q=new LinkedList<>();

        q.add(new Pair(sx,sy,0));

        while(!q.isEmpty()){

            int n=q.size();
            Pair p=q.peek();
            q.remove();
        //   visited[p.x][p.y]=1;
          for(int j=0;j<n;j++) {
              if (p.x == dx && p.y == dy) {
                  return p.dis;
              }

              for (int i = 0; i < 4; i++) {

                  int newx = p.x;
                  int newy = p.y;
                  int newd = p.dis;
                  while (newx >= 0 && newx < maze.length && newy >= 0 && newy < maze[1].length && maze[newx][newy] == 0) {
                      newx = newx + disx[i];
                      newy = newy + disy[i];


                  }
                  newx = newx - disx[i];
                  newy = newy - disy[i];
                  newd = Math.abs(p.x - newx) + Math.abs(p.y - newy);
//              newd=newd-1;
                  // System.out.println(newx +" "+newy+" "+newd);
                  // visited[newx][newy]=1;
                  q.add(new Pair(newx, newy, newd));
              }

          }
        }

        return -1;

    }

    public static void main(String[] args){

        int[][] maze=
        { {0, 0, 1, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 1, 0},
            {1, 1, 0, 1, 1},
            {0, 0, 0, 0, 0}};


        int[] start={0,4};

        int[] dest={4,4};

        int ans=shortestDistance(maze,start,dest);

        System.out.println(ans);
    }

}
