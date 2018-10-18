# -*- coding: utf-8 -*-
# @Author: yufeng
# @Date:   2018-10-18 22:14:14
# @Last Modified by:   yufeng
# @Last Modified time: 2018-10-18 22:20:19
# @Email: fzhiy270@sina.com
# @Blog: http://fzhiy.com/

class Solution:
    def merge(self, nums1, m, nums2, n):
        """
        :type nums1: List[int]
        :type m: int
        :type nums2: List[int]
        :type n: int
        :rtype: void Do not return anything, modify nums1 in-place instead.
        """
        while m>0 and n>0:
        	if nums1[m-1]>nums2[n-1]:
        		nums1[m+n-1] = nums1[m-1]
        		m -= 1
        	else :
        		nums1[m+n-1] = nums2[n-1]
        		n -= 1
        if n>0:
        	nums1[:n] = nums2[:n]