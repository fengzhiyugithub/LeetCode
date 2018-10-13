# -*- coding: utf-8 -*-
# @Author: yufeng
# @Date:   2018-10-13 19:27:56
# @Last Modified by:   yufeng
# @Last Modified time: 2018-10-13 19:56:07
# @Email: fzhiy270@sina.com
# @Blog: http://fzhiy.com/


# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        res = cur = ListNode(0)
        carry = 0
        while l1 or l2 or carry:
        	if l1:
        		carry, l1 = carry+l1.val, l1.next
        	if l2:
        		carry, l2 = carry+l2.val, l2.next
        	cur.next = ListNode(carry%10)
        	cur = cur.next
        	carry //= 10
        return res.next # res会有前导0
        