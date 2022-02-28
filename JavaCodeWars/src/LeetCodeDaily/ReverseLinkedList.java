package LeetCodeDaily;

public class ReverseLinkedList {


    public static class ListNode
    {

        int data;
        ListNode next;
        ListNode(int data){
            this.data=data;
            this.next=null;
        }
    }


    public static void main(){

        ListNode head=new ListNode(3);

        head.next=new ListNode(5);

        head.next.next=new ListNode(9);

        ListNode prev=null;

        while(head!=null){

            ListNode next=head.next;

            head.next=prev;

            prev=head;

            head=next;
        }


    }

}
