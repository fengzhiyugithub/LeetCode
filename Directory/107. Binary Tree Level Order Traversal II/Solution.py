# -*- coding: utf-8 -*-
# @Author: yufeng
# @Date:   2018-10-14 09:31:00
# @Last Modified by:   yufeng
# @Last Modified time: 2018-10-14 09:45:08
# @Email: fzhiy270@sina.com
# @Blog: http://fzhiy.com/

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
# dfs + 递归
class Solution:
    def levelOrderBottom(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        res = []
        self.dfs(root, 0, res)
        return res
    def dfs(self, root, level, res):
    	if root:
    		if len(res)<level+1:
    			res.insert(0, [])
    		res[~level].append(root.val)
    		self.dfs(root.left, level+1, res)
    		self.dfs(root.right, level+1, res)

# dfs + 栈
class Solution:
    def levelOrderBottom(self, root):
    	res, stack = [], [(root, 0)]
    	while stack:
    		node, level = stack.pop()
    		if node:
    			if len(res)<level+1:
    				res.insert(0, [])
    			res[~level].append(node.val)
    			stack.append((node.right, level+1))
    			stack.append((node.left, level+1))
    	return res

# bfs + queue
class Solution:
    def levelOrderBottom(self, root):
    	res, queue = [], collections.deque([(root, 0)])
    	while queue:
    		node, level = queue.popleft()
    		if node:
    			if len(res) < level+1:
    				res.insert(0, [])
    			res[~level].append(node.val)
    			queue.append((node.left, level+1))
    			queue.append((node.right, level+1))
    	return res