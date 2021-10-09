package StacksAndQueues;

import java.util.Stack;

public class StackImpl {

    public static void main(String[] args)
    {

        Stack<Integer>st=new Stack<>();  // collection framework

        st.push(10);
        st.push(20);
        st.push(40);
        st.push(50);


        while(!st.empty()){

            int x=st.peek();   // or just us st.pop()
            // st.pop();
            System.out.println(x);
        }
        // first in first out
    }

}
