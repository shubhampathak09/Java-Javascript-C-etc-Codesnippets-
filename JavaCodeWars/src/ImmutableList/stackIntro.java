package ImmutableList;

import java.util.Stack;

public class stackIntro {


    public static void main(String[] args){


      Stack<Integer>s=new Stack();

      s.push(2);
      s.push(3);
      s.push(4);

      while(s.size()!=0){
          System.out.println(s.peek());

      }




   }

}
