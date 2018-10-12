/*
* @Author: yufeng
* @Date:   2018-10-12 16:30:11
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-12 16:37:19
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
  		int cnta=0,cntb=0;
  		int a,b;
  		for(auto& num: nums){
  			if(a==num){
  				cnta++;
  			}else if(b==num){
  				cntb++;
  			}else if(cnta==0){
  				a=num;
  				cnta=1;
  			}else if(cntb==0){
  				b=num;
  				cntb=1;
  			}
  			else {
  				cnta--,cntb--;
  			}
  		}
  		cnta=cntb=0;
  		for(auto& num:nums){
  			if(num==a) cnta++;
  			else if(num==b) cntb++;
  		}
  		std::vector<int> v;
  		if(cnta>nums.size()/3) {
  			v.push_back(a);
  		}
  		if(cntb>nums.size()/3){
  			v.push_back(b);
  		}
  		return v;
    }
};