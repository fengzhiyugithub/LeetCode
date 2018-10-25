# -*- coding: utf-8 -*-
# @Author: yufeng
# @Date:   2018-10-25 17:21:59
# @Last Modified by:   yufeng
# @Last Modified time: 2018-10-25 17:24:09
# @Email: fzhiy270@sina.com
# @Blog: http://fzhiy.com/

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def mergeTwoLists(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        if l1 and l2:
        	if l1.val>l2.val:
        		l1, l2 = l2, l1
        	l1.next = self.mergeTwoLists(l1.next, l2)
        return l1 or l2