/*
* @Author: yufeng
* @Date:   2018-10-12 15:12:19
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-12 15:15:24
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/
class Solution {
public:
    int countPrimes(int n) {
        std::vector<bool> v(n, true);
        v[0]=v[1]=false;
        for(int i=2; i*i<=n; i++){
        	if(v[i]){
        		for(int j=i*i; j<n; j+=i){
        			v[j]=false;
        		}
        	}
        }
        return count(v.begin(), v.end(), true);
    }
};