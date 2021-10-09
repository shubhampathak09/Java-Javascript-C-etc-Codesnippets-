package StacksAndQueues;

import java.util.Stack;

public class CheckUnnecessayBrackets {


    public static void main(String[] args){

        String s="((a+b)+(c+d))";

        Stack<Character>ss=new Stack<>();

        if(s.isEmpty()){
            System.out.println("Invalid");
            return;
        }
        for(int i=0;i<s.length();i++)
        {
            char x=s.charAt(i);

            if(x==')'){


                if(ss.peek()=='('){

                    System.out.println("Invalid");
                    return;
                }else
                {
                    while(ss.peek()!='('){
                        ss.pop();
                    }
                    ss.pop();
                }

            }else{

                ss.push(x);
            }

        }

        System.out.println("Valid");
    }

}
