/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    public void inOrder(TreeNode root, List<Integer> res){
        if(root.left!=null) inOrder(root.left, res);
        res.add(root.val);
        if(root.right!=null) inOrder(root.right, res);
    }
    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer>res=new ArrayList<>();
        if(root==null){
            return res;
        }
        inOrder(root, res);
        return res;
    }
}
