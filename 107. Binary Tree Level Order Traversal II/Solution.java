/**
 * Definition for a binary tree node. public class TreeNode { int val; TreeNode
 * left; TreeNode right; TreeNode(int x) { val = x; } }
 */
class Solution {
    public List<List<Integer>> levelOrderBottom(TreeNode root) {
        if (root == null) {
            return Collections.emptyList();
        }
        LinkedList<List<Integer>> res = new LinkedList<>();
        Queue<TreeNode> queue = new LinkedList<>();
        queue.offer(root);
        while (!queue.isEmpty()) {
            int num = queue.size();
            List<Integer> levelTraversal = new ArrayList<>();
            for (int i = 0; i < num; i++) {
                TreeNode node = queue.poll(); //移除并返回队头元素，如果队列为空则返回null
                levelTraversal.add(node.val);
                if (node.left != null) {
                    queue.offer(node.left);///添加元素到队头并返回true
                }
                if (node.right != null) {
                    queue.offer(node.right);
                }
            }
            res.addFirst(levelTraversal);//添加到开头
        }
        return res;
    }
}
