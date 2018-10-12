/*
* @Author: yufeng
* @Date:   2018-10-12 15:56:31
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-12 16:07:22
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int i=0; i<nums.size(); i++){
        	int tmp=nums[i];
        	for(int j=i+1; j<=i+k&&j<nums.size(); j++){
        		if(nums[j]==tmp){
        			return true;
        		}
        	}
        }
        return false;
    }
};


//set::insert返回值是pair<iterator,bool>类型 
//http://www.cplusplus.com/reference/set/set/insert/
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        set<int>s;
        for(int i=0; i<nums.size(); i++){
        	if(i>k) {
        		s.erase(nums[i-k-1]);
        	}
        	if(s.insert(nums[i]).second == false){//==false代表s中已经存在这个数了
        		return true;
        	}
        }
        return false;
    }
};