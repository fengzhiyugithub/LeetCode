/*
* @Author: yufeng
* @Date:   2018-10-08 16:38:06
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-08 16:41:39
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/
class Solution {
public:
    int climbStairs(int n) {
        int f1=1, f2=2;
        for(int i=1; i<n; i++){
        	int tmp=f2;
        	f2+=f1;
        	f1=tmp;
        }
        return f1;
    }
};