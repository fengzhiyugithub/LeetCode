/*
* @Author: yufeng
* @Date:   2018-10-18 22:51:28
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-18 22:55:45
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/

// 0ms beats 100%
class Solution {
public:
    vector<int> getRow(int rowIndex) {
    	std::vector<int> res={1};
        for (double i=1; i<=rowIndex; i++){
        	res.push_back(res.back()*(rowIndex-i+1)/i);
        }
        return res;
    }
};