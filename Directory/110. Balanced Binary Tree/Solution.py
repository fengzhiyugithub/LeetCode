# -*- coding: utf-8 -*-
# @Author: yufeng
# @Date:   2018-10-15 16:44:39
# @Last Modified by:   yufeng
# @Last Modified time: 2018-10-15 18:23:23
# @Email: fzhiy270@sina.com
# @Blog: http://fzhiy.com/

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def isBalanced(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        return self.levelDiff(root)!=-1
    def levelDiff(self, root):
    	if not root: return 0
    	left, right = self.levelDiff(root.left), 0
    	if left != -1: right = self.levelDiff(root.right)
    	if left == -1 or right == -1 or abs(right-left)>1: return -1
    	return max(left, right)+1