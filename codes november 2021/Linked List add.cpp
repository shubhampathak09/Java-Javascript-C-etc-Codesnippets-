/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    ListNode*reverse(ListNode *l1){
        
        if(l1==NULL||l1->next==NULL){
            return l1;;
        }
        ListNode *nn=reverse(l1->next);
        
        l1->next->next=l1;
        l1->next=NULL;
        
        return nn;
        
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        l1=reverse(l1);
        l2=reverse(l2);
        
        ListNode*prev=NULL,*res=NULL;
        int first=0,second=0,carry=0;
        int sum=0;
        
        ListNode*temp=NULL;
        
        while(l1!=NULL||l2!=NULL){
            
            first=(l1) ? l1->val :0;
            second=(l2) ? l2->val :0;
            sum=first+second+carry;
            
            carry=sum/10;
            sum=sum%10;
            
            temp=new ListNode(sum);
            
            if(res==NULL){
              res=temp;
            }
            else
            {
                prev->next=temp;
            }
            prev=temp;
            
            if(l1)
                l1=l1->next;
            if(l2)
                l2=l2->next;
        }
        if(carry){
            temp->next=new ListNode(carry);
        }
        
        return (res);
        
        
    }
};


// check the reverse condition accordingg to question whter req or not



