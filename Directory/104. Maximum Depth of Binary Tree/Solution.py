# -*- coding: utf-8 -*-
# @Author: yufeng
# @Date:   2018-10-14 09:28:46
# @Last Modified by:   yufeng
# @Last Modified time: 2018-10-14 09:30:13
# @Email: fzhiy270@sina.com
# @Blog: http://fzhiy.com/

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if not root: return 0
        return max(self.maxDepth(root.left), self.maxDepth(root.right)) + 1