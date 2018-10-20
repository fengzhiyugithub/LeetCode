/*
* @Author: yufeng
* @Date:   2018-10-20 18:53:11
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-20 18:58:47
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/

class Solution {
public:
	string hex = "0123456789abcdef";
    string toHex(int num) {
    	if(!num) {
    		return "0";
    	}
        string res = "";
        int cnt=0;
        while(num && cnt++<8){
        	res = hex[(num & 0xf)] + res;
        	num >>= 4;
        }
        return res;
    }
};