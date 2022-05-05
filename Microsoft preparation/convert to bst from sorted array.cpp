//https://www.youtube.com/results?search_query=sorted+array+to+bst+time+complexity


class Solution {
public:
    
    TreeNode*convertBst(vector<int>&nums,int l,int r){
        
        
        if(l>r)
            return NULL;
        
        int mid=(l+r)/2;
        TreeNode *root=new TreeNode();
        root=new TreeNode(nums[mid]);
        root->left=convertBst(nums,l,mid-1);
        root->right=convertBst(nums,mid+1,r);
        return root;
        
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return convertBst(nums,0,nums.size()-1);
    }
};
