package StacksAndQueues;

import java.util.Stack;

public class CheckIfBalancedBrackets {

    public static void main(String[] args){

        //String s="(a+b)]";   // unbalanced



        String s="[(a+b)]";  // balanced


        Stack<Character>ss=new Stack<>();
        for(int i=0;i<s.length();i++)
        {

            char x=s.charAt(i);

            if(x=='('||x=='{'||x=='['){

                ss.push(x);


            }else if(x==')'){

                if(ss.size()==0){
                    System.out.println("Unbalanced");
                    return;
                }else{
                    if(ss.peek()!='('){
                        System.out.println("Unbalanced");
                        return;
                    }
                    ss.pop();
                }
            }else if(x=='}'){

                if(ss.size()==0){
                    System.out.println("Unbalanced");
                    return;
                }else{
                    if(ss.peek()!='{'){
                        System.out.println("Unbalanced");
                        return;
                    }
                    ss.pop();
                }

            }else if(x==']'){

                if(ss.size()==0){
                    System.out.println("Unbalanced");
                    return;
                }else
                {
                    if(ss.peek()!='['){
                        System.out.println("Unbalanced");
                        return;
                    }
                    ss.pop();
                }
            }

        }

        if(ss.isEmpty()){
            System.out.println("Balanced");
            return;
        }else
        {
            System.out.println("Unbalanced");
        }

        return;
    }

}
