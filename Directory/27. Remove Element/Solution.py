# -*- coding: utf-8 -*-
# @Author: yufeng
# @Date:   2018-10-13 20:15:33
# @Last Modified by:   yufeng
# @Last Modified time: 2018-10-14 08:54:54
# @Email: fzhiy270@sina.com
# @Blog: http://fzhiy.com/

class Solution:
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        while val in nums:
        	nums.remove(val)
        return len(nums)