/*
* @Author: yufeng
* @Date:   2018-10-12 15:29:12
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-12 15:50:48
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/
// 方法一sort()
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=0; i<int(nums.size())-1; i++){
        	if(nums[i]==nums[i+1]){
        		return true;
        	}
        }
        return false;
    }
};


///set().size
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        return nums.size()>set<int>(nums.begin(), nums.end()).size();
    }
};


///map
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::map<int, bool> map;
        for(auto& x: nums){
        	if(map.find(x)!=map.end()){
        		return true;
        	}else {
        		map[x]=1;
        	}
        }
        return false;
    }
};