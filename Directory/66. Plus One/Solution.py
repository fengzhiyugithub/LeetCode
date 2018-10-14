# -*- coding: utf-8 -*-
# @Author: yufeng
# @Date:   2018-10-14 09:07:44
# @Last Modified by:   yufeng
# @Last Modified time: 2018-10-14 09:24:37
# @Email: fzhiy270@sina.com
# @Blog: http://fzhiy.com/

class Solution:
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        # beat 99%
        for i in range(1,len(digits)+1):
        	if digits[-i]<9:#当前位小于9, 索引-1...-n
        		digits[-i]+=1
        		return digits
        	digits[-i]=0
        return [1]+[0]*len(digits)#原数全是9
        # for i in range(len(digits)):
        # 	if digits[~i] < 9:
        # 		digits[~i]+=1
        # 		return digits
        # 	digits[~i]=0
        # return [1]+[0]*len(digits)
