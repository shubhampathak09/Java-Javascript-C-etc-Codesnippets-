merge 2 sorted list recursive approahc

ListNode* merge(ListNode*l1,ListNode*l2){
	
	if(l1==NULL)
	return l2;
	else if(l2==NULL)
    return l1;
	
	
	ListNode*res=NULL;
	
	if(l1->val>=l2->val){
		res=l2;
		res->next2=merge(l1,l2->next);
	}else
	{
		res=l1;
		res->next=merge(l1->next,l2);
	}
		
		return res;
}
