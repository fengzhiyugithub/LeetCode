/*
* @Author: yufeng
* @Date:   2018-10-24 18:44:56
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-24 18:49:53
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i=0,reach=0,n=nums.size();
        while(i<n&&i<=reach){
        	reach=max(reach, i+nums[i]);
        	i++;
        }
        return i==n;
    }
};