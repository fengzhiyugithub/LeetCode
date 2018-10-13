/*
* @Author: yufeng
* @Date:   2018-10-13 11:46:53
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-13 12:14:39
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/

class Solution {
public:
    int numSquares(int n) {
		std::vector<int> dp(n+1, 0x3f3f3f3f);
		dp[0]=0;
		for(int i=1; i<=n; i++){
			for(int j=1; j*j<=i; j++){
				dp[i]=min(dp[i], dp[i-j*j]+1);
			}
		}
		return dp[n];
    }
};