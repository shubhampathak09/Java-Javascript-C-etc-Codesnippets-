package Trees;

import java.util.ArrayList;
import java.util.Stack;

public class TreeStructure {


    private static class Node
    {
        int val;
        ArrayList<Node> children=new ArrayList<>();
    }

    public static void main(String[] args){


        int[] arr={10,20,50,-1,60,-1,-1,30,70,-1,80,110,-1,120,-1,-1,90,-1,-1,40,100,-1,-1,-1};

        Node root=new Node();
        Stack<Node>st= new Stack<>();
// gi stack
        for(int i=0;i<arr.length;i++){


            if(arr[i]==-1){
                st.pop();
            }else
            {
                Node t=new Node();
                t.val=arr[i];

                if(st.size()>0)
                {

                    st.peek().children.add(t);
            //        st.push(t);
                }
                else
                {
                    root=t;
                //    st.push(root);
                }
                st.push(t);
                }

            }



        }


    }


