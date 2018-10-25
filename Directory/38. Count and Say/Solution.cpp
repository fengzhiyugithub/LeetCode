/*
* @Author: yufeng
* @Date:   2018-10-25 18:11:42
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-25 18:54:32
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/

class Solution {
public:
    string countAndSay(int n) {
        string res = "1";
        for(int k=1; k<n; k++){
        	string t="";
        	for(int i=0, tmp; i<res.length(); i=tmp){
        		int cnt=1;
        		tmp=i;
        		while(tmp+1<res.length()&&res[tmp]==res[tmp+1]){
        			tmp++;
        			cnt++;
        		}
        		tmp++;
        		t+=to_string(cnt)+res[i];
        	}
        	res=t;
        }
        return res;
    }
};