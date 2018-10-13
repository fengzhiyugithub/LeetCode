/*
* @Author: yufeng
* @Date:   2018-10-12 16:11:45
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-12 16:15:20
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/

///注意超出int范围
class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        for(int i=0; i<nums.size(); i++){
        	int tmp=nums[i];
        	for(int j=i+1; j<=i+k&&j<nums.size(); j++){
        		if(abs((long)nums[j]-tmp)<=t){
        			return true;
        		}
        	}
        }
        return false;
    }
};