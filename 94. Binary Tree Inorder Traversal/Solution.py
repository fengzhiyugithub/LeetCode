# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def inorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        res, tmp = [], []
        while root or len(tmp)>0:
            while root:
                tmp.append(root)
                root=root.left
            res.append(tmp[-1].val)
            root=tmp[-1].right
            del tmp[-1]
        return res
