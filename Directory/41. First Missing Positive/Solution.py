# -*- coding: utf-8 -*-
# @Author: yufeng
# @Date:   2018-10-18 23:10:03
# @Last Modified by:   yufeng
# @Last Modified time: 2018-10-18 23:29:25
# @Email: fzhiy270@sina.com
# @Blog: http://fzhiy.com/

#  TLE
# class Solution:
#     def firstMissingPositive(self, nums):
#         """
#         :type nums: List[int]
#         :rtype: int
#         """
#         L = len(nums) 
#         for i in range(L):
#         	while nums[i]>0 and nums[i]<=L and nums[i]!=nums[nums[i]-1]:
#         		nums[i], nums[nums[i]-1] = nums[nums[i]-1], nums[i]
#         for i in range(L):
#         	if nums[i]!=i+1:
#         		return i+1
#         return L+1
#         

# 如果abs(nums[i])<=L，则置为负数
class Solution:
    def firstMissingPositive(self, nums):
        n = len(nums)
        for i in range(n):
            if nums[i] <= 0: nums[i] = len(nums)+1
        for i in range(n):
            if abs(nums[i]) <= n: nums[abs(nums[i])-1] = -abs(nums[abs(nums[i])-1])
        for i in range(n):
            if nums[i] > 0: return i+1
        return n+1