/*
* @Author: yufeng
* @Date:   2018-10-23 21:33:42
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-23 21:40:56
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
        	else if(nums[r]>nums[mid]) r=mid;
        	else r--; /// 与153题不同的是 nums中可能有重复的数据，因为找最小的数，所以r--
        }
        return nums[l];
    }
};