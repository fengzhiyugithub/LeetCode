# -*- coding: utf-8 -*-
# @Author: yufeng
# @Date:   2018-10-13 20:11:59
# @Last Modified by:   yufeng
# @Last Modified time: 2018-10-13 20:50:30
# @Email: fzhiy270@sina.com
# @Blog: http://fzhiy.com/

class Solution:
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        s = str(x)
        for i in range(len(s)//2):
        	if s[i]!=s[len(s)-i-1]:
        		return False
        return True