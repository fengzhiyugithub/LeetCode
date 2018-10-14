# -*- coding: utf-8 -*-
# @Author: yufeng
# @Date:   2018-10-14 09:25:02
# @Last Modified by:   yufeng
# @Last Modified time: 2018-10-14 09:28:05
# @Email: fzhiy270@sina.com
# @Blog: http://fzhiy.com/

class Solution:
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        f, g = 1,2
        for i in range(1, n):
        	f, g = g, f+g
        return f