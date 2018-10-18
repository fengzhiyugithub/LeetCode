# -*- coding: utf-8 -*-
# @Author: yufeng
# @Date:   2018-10-18 19:06:08
# @Last Modified by:   yufeng
# @Last Modified time: 2018-10-18 22:10:52
# @Email: fzhiy270@sina.com
# @Blog: http://fzhiy.com/

# collections.OrderedDict()有序字典
# fromkeys(指定一个列表，把列表中的值作为字典的key,生成一个字典)
class Solution:
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums[:] = collections.OrderedDict.fromkeys(nums).keys()
        return len(nums)