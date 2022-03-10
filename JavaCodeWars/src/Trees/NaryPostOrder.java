package Trees;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Stack;

public class NaryPostOrder {


    public static class Node{

        int data;
        List<Node> child;

        Node(int data){
            this.data=data;
            child=new ArrayList<>();
        }

    }

    public static List<Integer> narryTraversal(Node root){

        LinkedList<Integer>result=new LinkedList<>();

        if(root==null)return result;

        Stack<Node>st=new Stack<>();

        st.push(root);

        while(!st.empty()){


            Node curr=st.peek();
            result.addFirst(curr.data);
            st.pop();
            for(Node c:curr.child){

                st.add(c);

            }

        }


        return result;
    }


    public static void main(String[] args){


        Node root=new Node(1);

        root.child.add(new Node(2));

        root.child.add(new Node(3));


            List<Integer>ls=new LinkedList<>();


            ls=narryTraversal(root);


            for(Integer i:ls){
                System.out.print(i+" ");
            }





    }

}
