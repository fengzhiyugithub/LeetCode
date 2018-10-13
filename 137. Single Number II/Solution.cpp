class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ones=0,twos=0;
        for(auto x: nums){
        	ones = (ones^x) & ~twos;
        	twos = (twos^x) & ~ones;
        }
        return ones;
    }
};