# -*- coding: utf-8 -*-
# @Author: yufeng
# @Date:   2018-10-18 22:29:46
# @Last Modified by:   yufeng
# @Last Modified time: 2018-10-18 22:37:47
# @Email: fzhiy270@sina.com
# @Blog: http://fzhiy.com/

#  52ms beats 20.67%
#  zip(row, row) 压缩返回一个对象 zip(*)解压缩转化为列表
class Solution:
    def getRow(self, rowIndex):
        """
        :type rowIndex: int
        :rtype: List[int]
        """
        row = [1]
        for _ in range(rowIndex):
        	row = [x+y for x,y in zip([0]+row, row+[0])]
        return row