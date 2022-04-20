/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        
        
        ListNode r=head;
        
        while(n>0){
            r=r.next;
            n=n-1;
            
        }
        
        ListNode dummy=new ListNode(-1);
        
        ListNode l=dummy;
        
        dummy.next=head;
        
        while(r!=null){
            
            l=l.next;
            r=r.next;
            
        }
        
        l.next=l.next.next;
        
        
        return dummy.next;
    }
}
