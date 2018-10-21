# -*- coding: utf-8 -*-
# @Author: yufeng
# @Date:   2018-10-21 18:00:33
# @Last Modified by:   yufeng
# @Last Modified time: 2018-10-21 18:01:24
# @Email: fzhiy270@sina.com
# @Blog: http://fzhiy.com/

class Solution:
    def rotate(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: void Do not return anything, modify matrix in-place instead.
        """
        matrix[:] = zip(*matrix[::-1])