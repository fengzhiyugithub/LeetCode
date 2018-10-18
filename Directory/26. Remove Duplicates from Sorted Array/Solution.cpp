/*
* @Author: yufeng
* @Date:   2018-10-18 12:28:14
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-18 19:04:27
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
        	if(!i) continue;
        	if(nums[i]==nums[i-1]){
        		nums.erase(nums.begin()+i);
        		i--;
        	}
        }
        return nums.size();
    }
};