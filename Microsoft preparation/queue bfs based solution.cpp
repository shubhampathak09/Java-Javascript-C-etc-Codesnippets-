// zig zag reverse level order
// queue bfs based solution

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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
     
        int l=0;
        
        vector<vector<int>>result;
        
        if(root==NULL)return result;
        
        
        queue<TreeNode*>q;
        
        
        q.push(root);
        
        
        int flag=true;
        
        while(!q.empty()){
            
            l++;
            
            int n=q.size();
            vector<int>curr;
            for(int i=1;i<=n;i++){
                
                
                auto u=q.front();
                q.pop();
                
                curr.push_back(u->val);
                if(u->left){
                    q.push(u->left);
                }
                if(u->right){
                    q.push(u->right);
                }
                    
            }
            if(l%2==0)
            {
                reverse(curr.begin(),curr.end());
                result.push_back(curr);
            }   
                
            else
            result.push_back(curr);
            
        }
        
        
        return result;
    }
};


// gg

