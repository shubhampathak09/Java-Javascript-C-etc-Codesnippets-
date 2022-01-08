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

        if(root.left==null&&root.right==null){
            path=path+" "+root.data;
            System.out.println(path);
            return;
        }

        printPath(root.left,path+root.data);
        printPath(root.right,path+root.data);

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
