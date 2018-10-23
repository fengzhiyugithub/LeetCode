/*
* @Author: yufeng
* @Date:   2018-10-23 21:22:46
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-23 21:29:32
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/

class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r = nums.size()-1;
        while (l<r){
        	int mid=(l+r)>>1;
        	if(nums[r]<nums[mid]) l=mid+1;
        	else r=mid;
        }
        return nums[l];
    }
};