# -*- coding: utf-8 -*-
# @Author: yufeng
# @Date:   2018-10-13 22:17:16
# @Last Modified by:   yufeng
# @Last Modified time: 2018-10-13 22:34:11
# @Email: fzhiy270@sina.com
# @Blog: http://fzhiy.com/

class Solution:
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        pattern = {'(':')', '[':']', '{':'}'}
        stack = []
        for ch in s:
        	if ch in pattern.keys():
        		stack.append(ch)
        	elif not stack or ch!=pattern[stack.pop()]:# 栈空或者匹配非法
        		return False
        return not stack