/*
* @Author: yufeng
* @Date:   2018-10-13 11:24:23
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-13 11:33:29
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/
class Solution {
public:
    int rob(vector<int>& nums) {
  		int suma=0,sumb=0;
  		for(int i=0; i<nums.size(); i++){
  			if(i&1){
  				suma=max(sumb, suma+nums[i]);
  			}else {
  				sumb=max(suma, sumb+nums[i]);
  			}
  		}
  		return max(suma, sumb);
    }
};

//DP
class Solution {
public:
    int rob(vector<int>& nums) {
  		int len = nums.size();
  		if(!len) return 0;
  		if(len==1) return nums[0];
  		if(len==2) return max(nums[0], nums[1]);
  		std::vector<int> dp(len, 0);
  		dp[0]=nums[0],dp[1]=max(nums[0], nums[1]);
  		for(int i=2; i<len; i++){
  			// 要么前一项dp[i-1]大，要么是前前一项dp[i-2]+nums[i]大
  			dp[i]=max(dp[i-1], dp[i-2]+nums[i]);
  		}
  		return dp[len-1];
    }
};

