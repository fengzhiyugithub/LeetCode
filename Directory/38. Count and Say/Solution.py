# -*- coding: utf-8 -*-
# @Author: yufeng
# @Date:   2018-10-25 18:11:42
# @Last Modified by:   yufeng
# @Last Modified time: 2018-10-25 19:21:33
# @Email: fzhiy270@sina.com
# @Blog: http://fzhiy.com/

class Solution:
    def countAndSay(self, n):
        """
        :type n: int
        :rtype: str
        """
        res = "1"
        for k in range(1, n):
        	ch, t, cnt = res[0], "", 0
        	for ch2 in res:
        		if ch2 == ch:
        			cnt+=1
        		else :
        			t+=str(cnt)+ch
        			ch, cnt = ch2, 1
        	t+=str(cnt)+ch
        	res=t
        return res

n = 4
sol = Solution()
ans = sol.countAndSay(n)
print(ans)