package MarchThirtyFirstTwentyTwentyTwoToMarchThrityFIrstTwentyTwentyThree;

public class MaxDiffNodeAncestor {


    public static class TreeNode{

        int data;
        TreeNode left;
        TreeNode right;
        TreeNode(int data){
            this.data=data;
            this.left=null;
            this.right=null;
        }
    }

    public static int maxDiff=0;

    public static int[] helper(TreeNode root){

        if(root==null)
            return new int[] {Integer.MAX_VALUE,Integer.MIN_VALUE};


        int[] left=helper(root.left);
        int[] right=helper(root.right);

       int leftMin=left[0];
       int rightMin=right[0];
       int min=Math.min(root.data,Math.min(leftMin,rightMin));

       int leftMax=left[1];
       int rightMax=right[1];
       int max=Math.max(root.data,Math.max(leftMax,rightMax));

      maxDiff=Math.max(max-root.data,Math.max(root.data-min,maxDiff));

      return new int[] {min,max};
    }

    public static  int maxDifference(TreeNode root){


        helper(root);

        return maxDiff;
    }

    public static void main(String[] args){


        String s="\"help\"";

        System.out.println(s);

        // shit



    }

}
