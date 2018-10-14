# -*- coding: utf-8 -*-
# @Author: yufeng
# @Date:   2018-10-14 08:55:32
# @Last Modified by:   yufeng
# @Last Modified time: 2018-10-14 09:04:26
# @Email: fzhiy270@sina.com
# @Blog: http://fzhiy.com/
class Solution:
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        if len(nums)<2:
        	return 1 if target>nums[0] else 0
        if target<=nums[0]:# 针对len>=2且target不大于nums[0]
        	return 0
        for i in range(len(nums)):
        	if i+1<len(nums) and target>nums[i] and target<=nums[i+1]:
        		return i+1
        return len(nums)