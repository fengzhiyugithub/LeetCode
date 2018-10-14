# -*- coding: utf-8 -*-
# @Author: yufeng
# @Date:   2018-10-14 09:45:55
# @Last Modified by:   yufeng
# @Last Modified time: 2018-10-14 09:46:31
# @Email: fzhiy270@sina.com
# @Blog: http://fzhiy.com/

class Solution:
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        res = 0
        for num in nums:
        	res ^= num
        return res