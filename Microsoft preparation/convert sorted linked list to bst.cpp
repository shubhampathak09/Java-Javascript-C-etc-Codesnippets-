 
    TreeNode * llBst(ListNode*&head,int l,int r){
        
        if(l>r||head==NULL)
            return NULL;
        
        int mid=(l+r+1)/2;
        
        TreeNode *root=new TreeNode();
        
        root->left=llBst(head,l,mid-1);
        
        root->val=head->val;
        
        head=head->next;
        
        root->right=llBst(head,mid+1,r);
        
        return root;
        
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
        
        int n=0;
        ListNode* nn=head;
        while(nn!=NULL){
            n++;
            nn=nn->next;
            
        }
        
        return llBst(head,0,n-1);
    }
};
