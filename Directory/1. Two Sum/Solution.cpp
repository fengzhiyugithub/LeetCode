方法１：
class Solution {
public:
    vector<int> twoSum(vector<int>& nums,int target) {
        vector<int>ans;
        for(int i=0; i<nums.size(); i++) {
            for(int j=i+1; j<nums.size(); j++) {
                if(nums[i]+nums[j] == target) {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;
    }
};


方法２：
class Solution {
public:
    vector<int> twoSum(vector<int>& nums,int target) {
        map<int, int>mp;
        for(int i=0; i<nums.size(); i++) {
            if(mp.find(target-nums[i])==mp.end()) { ///未在map中找到另一个数
                mp[nums[i]] = i;
            } else { ///找到满足条件的两个数
                vector<int>ans = {mp[target-nums[i]], i};
                return ans;
            }
        }
    }
};


