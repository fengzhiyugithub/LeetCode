# -*- coding: utf-8 -*-
# @Author: yufeng
# @Date:   2018-10-14 09:46:49
# @Last Modified by:   yufeng
# @Last Modified time: 2018-10-14 09:49:09
# @Email: fzhiy270@sina.com
# @Blog: http://fzhiy.com/

class Solution:
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        ones, twos = 0, 0
        for num in nums:
        	ones = (ones^num) & ~twos
        	twos = (twos^num) & ~ones
        return ones