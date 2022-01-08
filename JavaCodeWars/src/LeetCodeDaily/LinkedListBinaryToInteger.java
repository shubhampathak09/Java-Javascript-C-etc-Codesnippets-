package LeetCodeDaily;

public class LinkedListBinaryToInteger {


    public static class Node{

        int data;
        Node next;
        Node(int data){
            this.data=data;
            this.next=null;

        }

    }

    public static void main(String[] args){

        Node head=new Node(1);

        head.next=new Node(0);

        head.next.next=new Node(1);

        Node curr=head;

        StringBuilder sb=new StringBuilder();


        while(curr!=null){
            sb.append(curr.data);
            curr=curr.next;
        }

      //  System.out.println(sb);

        int ans= Integer.parseInt(sb.toString(),2);

        System.out.println(ans);

    }

}
