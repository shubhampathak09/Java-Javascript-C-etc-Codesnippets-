package Algo2026.Stacks;

import java.util.Scanner;
import java.util.Stack;

public class DuplicateBrackets {


    // if duplicate brackets - give true
    // else false



    public static void main(String[] args)
    {
        Scanner scn = new Scanner(System.in);
        Stack<Character> st = new Stack<>();

        String str = scn.nextLine();
        for(int i = 0 ;i< str.length();i++){
            char ch = str.charAt(i);
            if(ch == ')')
            {
             if(st.peek() == '('){
                 System.out.println(true); // duplicate brackets
                 return;
             }
             else {
                 while(st.peek() !='('){
                     st.pop();
                 }
                 st.pop(); // remove the last closing bracket
             }
            }else {
                st.push(ch);
            }
        }

        // no duplicate bracket
        System.out.println(false);
    }

}
