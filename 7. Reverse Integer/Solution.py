# -*- coding: utf-8 -*-
# @Author: yufeng
# @Date:   2018-10-13 20:00:53
# @Last Modified by:   yufeng
# @Last Modified time: 2018-10-13 20:10:09
# @Email: fzhiy270@sina.com
# @Blog: http://fzhiy.com/

class Solution:
	def reverse(self, x):
		"""
        :type x: int
        :rtype: int
        """
		s = str(abs(x))
		reversed_s = int(s[::-1])
		if reversed_s>(1<<32-1): return 0
		return reversed_s if x>0 else (-1 * reversed_s)