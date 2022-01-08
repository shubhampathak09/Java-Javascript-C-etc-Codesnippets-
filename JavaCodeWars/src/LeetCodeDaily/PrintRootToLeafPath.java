package LeetCodeDaily;

public class PrintRootToLeafPath {


    public static class Node{

        int data;
        Node left;
        Node right;

        Node(int data){
            this.data=data;
            this.left=null;
            this.right=null;
        }
    }


    public static void printPath(Node root,String path){

        if(root==null){
            return;
        }
        path=path+" "+root.data;


        if(root.left==null&&root.right==null){
          //  path=path+" "+root.data;
            System.out.println(path);
            //return;
        }
        else {
            printPath(root.left, path);
            printPath(root.right, path);
        }
    }

    public static void main(String[] args){

        Node root=new Node(10);
        root.left=new Node(8);
        root.right=new Node(2);

      //  root.left.right=new Node(5);
       // root.right.left=new Node(2);

        String path="";

        printPath(root,path);


        // check
    }

}
