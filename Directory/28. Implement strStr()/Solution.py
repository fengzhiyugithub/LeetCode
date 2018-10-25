# -*- coding: utf-8 -*-
# @Author: yufeng
# @Date:   2018-10-25 17:55:56
# @Last Modified by:   yufeng
# @Last Modified time: 2018-10-25 17:57:43
# @Email: fzhiy270@sina.com
# @Blog: http://fzhiy.com/

class Solution:
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        return haystack.index(needle) if needle in haystack else -1