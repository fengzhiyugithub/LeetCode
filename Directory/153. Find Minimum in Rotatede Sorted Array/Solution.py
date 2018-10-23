# -*- coding: utf-8 -*-
# @Author: yufeng
# @Date:   2018-10-23 21:22:46
# @Last Modified by:   yufeng
# @Last Modified time: 2018-10-23 21:31:07
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
        	if nums[mid]>nums[r]:
        		l=mid+1
        	else :
        		r=mid
        return nums[l]