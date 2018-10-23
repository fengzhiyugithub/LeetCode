# -*- coding: utf-8 -*-
# @Author: yufeng
# @Date:   2018-10-23 21:41:13
# @Last Modified by:   yufeng
# @Last Modified time: 2018-10-23 21:45:31
# @Email: fzhiy270@sina.com
# @Blog: http://fzhiy.com/

class Solution:
    def findMin(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        l, r = 0, len(nums)-1
        while l<r:
        	mid = (l+r)>>1
        	if nums[r]<nums[mid]:
        		l=mid+1
        	elif nums[r]>nums[mid]:
        		r=mid
        	else :
        		r-=1
        return nums[l]

class Solution:
    def findMin(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        # return sorted(nums)[0]
        return sorted(list(set(nums)))[0]