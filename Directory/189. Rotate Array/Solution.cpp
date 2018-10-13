/*
* @Author: yufeng
* @Date:   2018-10-10 14:57:23
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-10 14:59:27
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
   		int n=nums.size();
   		for(int i=0; i<k; i++){
   			nums.insert(nums.begin(), nums[n-1]);
   			nums.erase(nums.end()-1);
   		}
    }
};