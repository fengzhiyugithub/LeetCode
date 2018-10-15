# -*- coding: utf-8 -*-
# @Author: yufeng
# @Date:   2018-10-15 16:35:13
# @Last Modified by:   yufeng
# @Last Modified time: 2018-10-15 18:24:44
# @Email: fzhiy270@sina.com
# @Blog: http://fzhiy.com/

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def hasPathSum(self, root, sum):
        """
        :type root: TreeNode
        :type sum: int
        :rtype: bool
        """
        if not root:
        	return False
        sum -= root.val
        if not root.left and not root.right:
        	if sum == 0:
        		return True
        	else :
        		return False
        return self.hasPathSum(root.left, sum) or self.hasPathSum(root.right, sum)