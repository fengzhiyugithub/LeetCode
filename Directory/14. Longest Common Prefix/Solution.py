# -*- coding: utf-8 -*-
# @Author: yufeng
# @Date:   2018-10-13 21:00:52
# @Last Modified by:   yufeng
# @Last Modified time: 2018-10-13 22:10:43
# @Email: fzhiy270@sina.com
# @Blog: http://fzhiy.com/
 
class Solution:
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        if len(strs)==0: return ""
        # strs=sorted(strs)
        # first = strs[0]
        first=min(strs, key=len) #min是从小到大排列，排列的标准key是字符串长度len
        for i,ch in enumerate(first):
        	for other in strs:
        		if other[i]!=ch:
        			return first[:i]
        return first
        