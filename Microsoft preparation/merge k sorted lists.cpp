//// merge ksorted list
//
//
//node* sortedMerge(node*a,node*b){
//	
//	
//	if(a==NULL)
//	return b;
//	else if(b==NULL)
//	return a;
//	
//	
//	node*res;
//	
//	
//	if(a->data<=b->data){
//		result=a;
//		result->next=sirtedMer(a->next,b);
//	}
//	else
//	{
//		resukt=b;
//		result->nxt=soirrMer(a,b->next);
//	}
//	
//	return result;
//}
//
//node* mergeKLists(vector<nnode*>lists){
//	
//	int k=lists.size();
//	
//	if(k==0)
//	return NULL;
//	
//	int last=k-1;
//	
//	while(last!=0){
//		
//		
//		int i=0;
//		int j=last;
//		
//		
//		while(i<j){
//			
//			
//			lists[i]=sortedMerge(lists[i],lists[j]);
//			
//			i++;
//			j--;
//			if(i>=j)
//			{
//				last=j;
//			}
//		}
//		
//		//return lists[0];
//	}
//	
//	return lists[0];
//}




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
    
    
    ListNode *mergeTwoList(ListNode*l1,ListNode*l2){
        if(l1==NULL)
            return l2;
            else if(l2==NULL)
                return l1;
        
        ListNode*result=NULL;
        
        if(l1->val<=l2->val){
            result=l1;
            result->next=mergeTwoList(l1->next,l2);
            
        }else
        {
            result=l2;
            result->next=mergeTwoList(l1,l2->next);
        }
        
        return result;
    }
    
    ListNode* mergek(vector<ListNode*>&lists,int k){
        
        if(k==0)
            return NULL;
        
        int last=k-1;
        
        while(last!=0){
            
            
            int i=0;
            int j=last;
            
            while(i<j){
            lists[i]=mergeTwoList(lists[i],lists[j]);
              i++;
              j--;
                
              if(i>=j)
                  last=j;
            }
        }
        return lists[0];
        
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        int k=lists.size();
        return mergek(lists,k);
    }
};
