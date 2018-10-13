class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=nums.size(),i=0;
        for(auto x: nums){
            sum=sum^x^i++;
        }
        return sum;
    }
};