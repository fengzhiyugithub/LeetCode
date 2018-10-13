# -*- coding: utf-8 -*-
# @Author: yufeng
# @Date:   2018-10-13 19:04:36
# @Last Modified by:   yufeng
# @Last Modified time: 2018-10-13 19:20:48
# @Email: fzhiy270@sina.com
# @Blog: http://fzhiy.com/
class Solution:
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        dic = {} # val, key映射
        for i in range(len(nums)):
        	if target - nums[i] in dic: 
        		return [dic[target - nums[i]], i]
        	dic[nums[i]] = i