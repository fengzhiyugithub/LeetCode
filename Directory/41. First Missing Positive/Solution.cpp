/*
* @Author: yufeng
* @Date:   2018-10-18 23:07:00
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-18 23:09:43
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for (int i=0; i<nums.size(); i++){
        	while(nums[i]>0&&nums[i]<=nums.size()&&nums[nums[i]-1]!=nums[i]){
        		///如果nums[i]不在nums[i]-1这个位置上
        		swap(nums[nums[i]-1], nums[i]);
        	}
        }
        for(int i=0; i<nums.size(); i++){
        	if(nums[i]!=i+1){
        		return i+1;
        	}
        }
        return nums.size()+1;
    }
};