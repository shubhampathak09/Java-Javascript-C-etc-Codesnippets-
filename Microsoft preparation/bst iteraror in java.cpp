/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class BSTIterator {

    public Stack<TreeNode>s;
    
    public void pushAll(TreeNode root){
        while(root!=null){
         s.push(root);
            root=root.left;
        }
    }
    
    public BSTIterator(TreeNode root) {
        
        s=new Stack();
        pushAll(root);
    }
    
    public int next() {
        
        TreeNode node=s.pop();
        pushAll(node.right);
        return node.val;
        
    }
    
    public boolean hasNext() {
        
        if(s.isEmpty())
            return false;
        else
            return true;
        
    }
}

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator obj = new BSTIterator(root);
 * int param_1 = obj.next();
 * boolean param_2 = obj.hasNext();
 */
