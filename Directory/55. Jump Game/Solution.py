# -*- coding: utf-8 -*-
# @Author: yufeng
# @Date:   2018-10-24 18:44:56
# @Last Modified by:   yufeng
# @Last Modified time: 2018-10-24 18:47:51
# @Email: fzhiy270@sina.com
# @Blog: http://fzhiy.com/

class Solution:
    def canJump(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        reach, i, n = 0, 0, len(nums)
        while i < n and i <= reach:
        	reach = max(reach, i+nums[i])
        	i += 1
        return i==n