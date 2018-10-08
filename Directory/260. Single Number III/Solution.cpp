/*
* @Author: yufeng
* @Date:   2018-10-08 16:18:54
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-08 16:19:09
*/
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>res(2, 0);
        int sum=0,index=0;
        for(auto x: nums){
            sum^=x;
        }
        for(index=0; index<32; index++){
            if(sum&(1<<index)){
                break;
            }
        }
        for(auto x: nums){
            if(x&(1<<index)){
                res[0]^=x;
            }else {
                res[1]^=x;
            }
        }
        return res;
    }
};