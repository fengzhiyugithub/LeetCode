class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(vector<int>::iterator it=nums.begin(); it!=nums.end(); it++) {
            if((*it)==val) {
                nums.erase(it);
                it--;
            }
        }
        return nums.size();
    }
};
