package Algo2026.Stacks;

import java.util.Scanner;
import java.util.Stack;

public class BalancedBrackets {

    public static void main(String[] args){

        Scanner scn = new Scanner(System.in);
        String str = scn.nextLine();

        Stack<Character> st = new Stack<>();

       for(int i=0 ; i<str.length(); i++){
           char ch = str.charAt(i);

           if(ch == '(' || ch == '[' || ch == '{'){
               st.push(ch);
           }
           else if(ch == ')'){
               boolean  checkClosing = handleClosing(st, '(');
               if(!checkClosing) {
                   System.out.println(false);
                   return;
               }
           }
           else if(ch == '}'){
               boolean  checkClosing = handleClosing(st, '{');
               if(!checkClosing)
               {
                   System.out.println(false);
                   return;
               }
           }
           else if(ch == ']'){
               boolean  checkClosing = handleClosing(st, '[');
               if(!checkClosing)
               {
                  System.out.println(false);
                  return;
               }
           }else {

           }
       }

       if(!st.isEmpty()){
           System.out.println(false);

       }else {
           System.out.println(true);
       }



    }

    public static boolean handleClosing(Stack<Character>st , char ocb){
         if(st.size() == 0){
             System.out.println("Extra Closing brackets");
             return false;
         }else if(st.peek() != ocb){
               return false;
         }else
         {
             st.pop();
             return true;
         }
    }
}
