class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int res=nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=target){
                res=i;
                break;
            }
        }
        return res;
    }
};