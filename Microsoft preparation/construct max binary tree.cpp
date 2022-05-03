/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
//     int maxiIndex(vector<int>&nums,int l ,int r){
        
//         int mx=INT_MIN;
//         int k=-1;
//         for(int i=l;i<=r;i++){
            
//             if(nums[i]>mx){
//                 mx=nums[i];
//                 k=i;
//             }
//         }
//         return mx;
//     }
    
    TreeNode*helperFunction(vector<int>&nums,int l,int r){
        
        if(l>r){
            return NULL;
        }
        
        int k=-1;
        int mx=INT_MIN;
        for(int i=l;i<=r;i++){
            if(nums[i]>mx){
                mx=nums[i];
                k=i;
            }
        }
        
         TreeNode*root=new TreeNode(nums[k]);
        
        root->left=helperFunction(nums,l,k-1);
        root->right=helperFunction(nums,k+1,r);
        
        
        return root;
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        
        int l=0;
        int r=nums.size()-1;
        
        
         TreeNode*root=helperFunction(nums,l,r);
        
        return root;
    }
};
