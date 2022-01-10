package Trees;

import java.util.ArrayList;
import java.util.Stack;

public class GenericTree {

private static class Node{

    int data;
    ArrayList<Node>children=new ArrayList<>();


}


private  static int  max_val(Node node){

    int mx=Integer.MIN_VALUE;

    for(Node n:node.children){

        int cmax=max_val(n);
        mx=Math.max(mx,cmax);
    }
    mx=Math.max(node.data,mx);

    return mx;
}

private static int sz(Node node){

    int siz=0;

    for(Node n:node.children){
        siz+=sz(n);
    }

    return 1+siz;
}


private static int height(Node node){

    int ht=0;   // in case of edges use ht=-1

    for(Node n:node.children){


        int h=height(n);
        ht=Math.max(h,ht);
    }
    ht+=1;

    return ht;

}


public static void display(Node node){
     // display(10)  -> selft(10) and its childten
    //                  dsp(20)
    //                  dsp(30)

    String str=node.data + "->";
    for(Node child:node.children){
        str+=child.data +", ";
    }
    str+=".";
System.out.println(str);

for(Node child:node.children){
    display(child);
}






}






public static void main(String[] args){


    Node root=null;

    int[] arr={10,20,50,-1,60,-1,-1,30,70,-1,80,110,-1,120,-1,-1,90,-1,-1,40,100,-1,-1,-1,};

    //int[] arr2={10,20,50,-1,60,-1,-1,30,70,-1,80,-1,90,-1,-1,40,100,-1,-1,-1};

    Stack<Node>st=new Stack<>() ;
    for(int i=0;i<arr.length;i++){

        if(arr[i]==-1){
            st.pop();
        }else
        {

            Node t=new Node();
            t.data=arr[i];

            if(st.size()>0) {
                st.peek().children.add(t);

            }
            else
            {
                root=t;

            }
              st.push(t);

        }



    }

    display(root);

    System.out.println("The size of generic tree is..."+sz(root));


    System.out.println("The max value in GT is.."+max_val(root));


    System.out.println("The height of tree is.."+height(root));




}

}
