/*
* @Author: yufeng
* @Date:   2018-10-10 15:06:34
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-10 15:08:18
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        for(int i=0; i<nums.size(); i++){
        	if(nums[i]) {
        		nums[j++]=nums[i];
        	}
        }
        while(j<nums.size()){
        	nums[j++]=0;
        }
    }
};