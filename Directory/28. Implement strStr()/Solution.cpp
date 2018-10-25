/*
* @Author: yufeng
* @Date:   2018-10-25 17:50:16
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-25 17:53:31
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int lenH=haystack.length(), lenN=needle.length();
        if(lenN == 0){
        	return 0;
        }
        for(int i=0; i<=lenH-lenN; i++){
        	if(haystack.substr(i, lenN) == needle){
        		return i;
        	}
        }
        return -1;
    }
};