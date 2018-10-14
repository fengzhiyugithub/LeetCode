# -*- coding: utf-8 -*-
# @Author: yufeng
# @Date:   2018-10-14 09:04:49
# @Last Modified by:   yufeng
# @Last Modified time: 2018-10-14 09:07:05
# @Email: fzhiy270@sina.com
# @Blog: http://fzhiy.com/

class Solution:
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        sum,ans = 0,nums[0]
        for num in nums:
        	sum+=num
        	ans=max(ans, sum)
        	sum=max(sum, 0)
        return ans