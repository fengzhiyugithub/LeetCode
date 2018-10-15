# -*- coding: utf-8 -*-
# @Author: yufeng
# @Date:   2018-10-15 18:20:47
# @Last Modified by:   yufeng
# @Last Modified time: 2018-10-15 18:21:03
# @Email: fzhiy270@sina.com
# @Blog: http://fzhiy.com/

# -*- coding: utf-8 -*-
# @Author: yufeng
# @Date:   2018-10-15 16:50:15
# @Last Modified by:   yufeng
# @Last Modified time: 2018-10-15 16:59:23
# @Email: fzhiy270@sina.com
# @Blog: http://fzhiy.com/

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
	minDepth = 0
	
	def maxDepth(self, root):
		if not root: return 0
		return max(self.maxDepth(root.left), self.maxDepth(root.right))+1

	def findMinDepth(self, root, level):
		if not root: return 
		if not root.left and not root.right:
			if level < self.minDepth:
				self.minDepth = level
		self.findMinDepth(root.left, level+1)
		self.findMinDepth(root.right, level+1)

	def minDepth(self, root):
		"""
		:type root: TreeNode
		:rtype: int
		"""
		self.minDepth = self.maxDepth(root)
		self.findMinDepth(root, 1)
		return self.minDepth