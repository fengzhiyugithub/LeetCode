/*
* @Author: yufeng
* @Date:   2018-10-20 19:12:38
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-20 19:20:29
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/

class Solution {
public:
    vector<int> countBits(int num) {
        std::vector<int> v(num+1, 0);
        for(int i=1; i<=num; i++){
        	v[i]=v[i&(i-1)]+1;
        }
        return v;
    }
};