/*
* @Author: yufeng
* @Date:   2018-10-08 16:23:29
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-08 16:27:17
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,ans=nums[0];
        for(auto x: nums){
        	sum+=x;
        	if(ans<sum){
        		ans=sum;
        	}
        	if(sum<0){
        		sum=0;
        	}
        }
        return ans;
    }
};