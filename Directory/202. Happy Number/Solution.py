# -*- coding: utf-8 -*-
# @Author: yufeng
# @Date:   2018-10-16 18:09:59
# @Last Modified by:   yufeng
# @Last Modified time: 2018-10-16 18:35:08
# @Email: fzhiy270@sina.com
# @Blog: http://fzhiy.com/

class Solution:
    def isHappy(self, n):
        """
        :type n: int
        :rtype: bool
        """
        st = set()
        while n != 1:
        	n = sum([int(i)**2 for i in str(n)])
        	if n in st:
        		return False
        	else :
        		st.add(n)
        return True