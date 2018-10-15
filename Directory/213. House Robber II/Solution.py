# -*- coding: utf-8 -*-
# @Author: yufeng
# @Date:   2018-10-15 18:12:45
# @Last Modified by:   yufeng
# @Last Modified time: 2018-10-15 18:16:28
# @Email: fzhiy270@sina.com
# @Blog: http://fzhiy.com/

class Solution:
    def rob(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if not nums: return 0
        if len(nums) <= 2: return max(nums)
        return max(self.rob_row(nums[1:]), self.rob_row(nums[:-1]))

    def rob_row(self, nums):
    	res = [0]*2
    	res[0], res[1] = nums[0], max(nums[0], nums[1])
    	for i in range(2, len(nums)):
    		res[i%2] = max(res[(i-1)%2], res[(i-2)%2] + nums[i])
    	return max(res[0], res[1])